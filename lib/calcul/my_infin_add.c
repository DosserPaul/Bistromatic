/*
** EPITECH PROJECT, 2020
** infin_add
** File description:
** infin_add
*/
#include <stddef.h>
#include <stdlib.h>
#include "../my/my.h"

char *shorter_array(char *array, char *ops);
char *transform(char *array, char *base);
char *transform_back(char *array, char *base);
int length(char *str);
int calcul_infin_add(char *nb_a, char*nb_b, char *result, int max_size);

int size_malloc_add(char *nb_a, char *nb_b, int *max_size)
{
    *max_size = length(nb_a);
    int size_b = length(nb_b);
    int result = 0;

    if (*max_size < size_b) {
        *max_size = size_b;
    }
    result = *max_size;
    result = result + 2;
    return (result);
}

char addition_calc(char a, char b, int *retenue)
{
    char r;
    int r_i = 0;
    int val_a = a - 48;
    int val_b = b - 48;
    if (val_a < 0 || val_a > 9)
        val_a = 0;
    if (val_b < 0 || val_b > 9)
        val_b = 0;
    r_i = val_a + val_b + *retenue;
    r = ((r_i%10) + 48);
    *retenue = ((r_i / 10)%10);
    return (r);
}

int calc_index(char *argv, int max_size, int current)
{
    int size = length(argv);
    int r = 0;

    if (max_size == size) {
        return (current);
    }
    r = current - (max_size - size);
    if (r < 0)
        r = -1;
    return (r);
}

void init_char(char *re, int max_size)
{
    re[max_size -1] = '\0';
    re[0] = '0';
}

char *infin_add(char *nb_a, char *nb_b, char *base, char *ops)
{
    int max_size = 0;
    nb_a = transform_back(nb_a, base);
    nb_b = transform_back(nb_b, base);
    int size_mal = size_malloc_add(nb_a, nb_b, &max_size);
    if (size_mal == 0)
        return ("0");
    char *result = malloc(sizeof(char) * size_mal);
    int retenue = 0;
    init_char(result, size_mal);
    retenue = calcul_infin_add(nb_a, nb_b, result, max_size);
    if (retenue > 0)
        result[0] = addition_calc(nb_a[-1], nb_b[-1], &retenue);
    result = shorter_array(result, ops);
    result = transform(result, base);
    return (result);
}
