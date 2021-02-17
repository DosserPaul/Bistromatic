/*
** EPITECH PROJECT, 2020
** infin_add
** File description:
** infin_add
*/
#include <stddef.h>
#include <stdlib.h>
#include "include/my.h"

void addition(char **av, int retenue, int index_max, int is_first)
{
    int index_a = calcul_index(1, index_max, is_first, av);
    int index_b = calcul_index(0, index_max, is_first, av);
    int r = 0;

    if (retenue <= 0 && index_max < 0)
        return;
    int a = my_get_char_number(av[1][index_a], index_max);
    int b = my_get_char_number(av[2][index_b], index_max);
    r = a + b + retenue;
    retenue = ((r - r%10) / 10);
    int a_is_digit = my_is_digit(av[1][index_a - 1]);
    int b_is_digit = my_is_digit(av[2][index_b - 1]);
    if ((a_is_digit != 0 || b_is_digit != 0)) {
        index_max --;
        addition(av, retenue, index_max, is_first);
    } else if(retenue > 0 && index_max <= 0) {
        index_max --;
        addition(av, retenue, index_max, is_first);
    }
    my_putchar((r%10 + 48));
}

void soustraction(char **av, int *indexes, int is_first, int modif_signe)
{
    int r = 0;
    verif_minus_sous(av, indexes[0], indexes[1], modif_signe);
    if (indexes[0] < 0 && indexes[1] < 0)
        return;
    if (can_calcul_sous(av, indexes[0], indexes[1]) == 0)
        return;
    r = result_soustract(av, &indexes[0], &indexes[1], &modif_signe);
    if (r < 0)
        r = r * (-1);
        int a_is_digit = my_is_digit(av[1][indexes[0] - 1]);
        int b_is_digit = my_is_digit(av[2][indexes[1] - 1]);
    if (( a_is_digit != 0 || b_is_digit != 0)) {
        indexes[0] = indexes[0] - 1;
        indexes[1] = indexes[1] - 1;
        soustraction(av, indexes, is_first, modif_signe);
    } else if(indexes[0] == 0 || indexes[1] == 0) {
        indexes[0] = indexes[0] - 1;
        indexes[1] = indexes[1] - 1;
        soustraction(av, indexes, is_first, modif_signe);
    }
    print_soustraction(indexes[0], indexes[1], (r%10));
}

void init_my_find_add(char **av, int *ope, int *add, int *max)
{
    if (my_strlen(av[2]) > *max)
        *max = my_strlen(av[2]);
    if (av[1][0] == '-')
        *ope += 1;
    if (av[2][0] == '-')
        *ope += 1;
    if (my_strlen(av[2]) > *max)
        *max = my_strlen(av[2]);
    if (*ope > 0)
        *add ++;
}

int verif_inverse(char **av, int ope, int *is_first, int max_length)
{
    if (av[1][0] == '-' && ope == 1) {
        char *tampons = av[1];
        av[1] = av[2];
        av[2] = tampons;
    }
    if (max_length > my_strlen(av[2]))
        *is_first = 1;
    if (max_length > my_strlen(av[1]))
        *is_first = 2;
        return (0);
}

int main(int argc, char **av)
{
    int indexes[2];
    int max_length = my_strlen(av[1]);
    int ope = 0;
    int to_add = 1;
    init_my_find_add(av, &ope, &to_add, &max_length);
    int is_first = 0;
    int rev = verif_inverse(av, ope, &is_first, max_length);
    if (ope != 1) {
        if (ope > 0)
            my_putchar('-');
        addition(av, 0, (max_length - 1), is_first);
    } else {
        indexes[0] = calcul_index(1, (max_length - 1), is_first, av);
        indexes[1] = calcul_index(0, (max_length - 1), is_first, av);
        soustraction(av, indexes, is_first, rev);
    }
    my_putchar('\n');
    return (0);
}
