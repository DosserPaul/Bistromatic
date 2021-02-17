/*
** EPITECH PROJECT, 2020
** infint_aquality
** File description:
** infint_equality
*/

#include "../my/my.h"

int equal_inf(char *nb_a, char *nb_b)
{
    int size_a = my_strlen(nb_a);
    int size_b = my_strlen(nb_b);
    if (size_a != size_b) {
        return (0);
    }
    for (int i = 0; i < size_a; i ++) {
        if (nb_a[i] != nb_b[i])
            return (0);
    }
    return (1);
}

int calc_index_equa(int index, int size_array, int max)
{
    if (max == size_array)
        return (index);
    return (index + size_array);
}

int superior_infin(char *nb_a, char *nb_b)
{
    int size_a = my_strlen(nb_a);
    int size_b = my_strlen(nb_b);
    int val_a = 0;
    int val_b = 0;
    int index_a;
    int index_b;

    if (size_b > size_a)
        return(0);
    for (int i = 0; i < size_a; i++) {
        index_a = calc_index_equa(i, size_a, size_a);
        index_b = calc_index_equa(i, size_b, size_a);
        if (nb_a[index_a] < nb_b[index_b]) {
            val_b ++;
        } else if (nb_a[index_a] > nb_b[index_b]) {
            val_a ++;
        }
    }
    if (val_a > val_b)
        return (1);
    return (0);
}

int inferior_infin(char *nb_a, char *nb_b)
{
    int size_a = my_strlen(nb_a);
    int size_b = my_strlen(nb_b);
    int val_a = 0;
    int val_b = 0;
    int index_a;
    int index_b;

    if (size_b < size_a)
        return(0);
    for (int i = 0; i < size_a; i++) {
        index_a = calc_index_equa(i, size_a, size_a);
        index_b = calc_index_equa(i, size_b, size_a);
        if (nb_a[index_a] < nb_b[index_b]) {
            val_b ++;
        } else if (nb_a[index_a] > nb_b[index_b]) {
            val_a ++;
        }
    }
    if (val_a < val_b)
        return (1);
    return (0);
}