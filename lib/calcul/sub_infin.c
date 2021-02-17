/*
** EPITECH PROJECT, 2020
** my_sub_infin
** File description:
** sub_infin
*/

#include <stdlib.h>

int length(char *str);
char *shorter_array(char *array, char *ops);
char *transform(char *array, char *base);
char *transform_back(char *array, char *base);

int size_malloc_sub(char *nb_a, char *nb_b, int *max_size)
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

char sub_calc(char a, char b, int *retenue)
{
    char r;
    int r_i = 0;
    int val_a = a - 48;
    int val_b = b - 48;
    if (val_b < 0 || val_b > 9)
        val_b = 0;
    if (val_a < 0 || val_a > 9)
        val_a = 0;
    if (*retenue)
        val_b += *retenue;
    *retenue = 0;
    if (val_b > val_a) {
        val_a += 10;
        *retenue = 1;
    }
    r = val_a - val_b;
    return (r + 48);
}

int calc_index_sub(char *argv, int max_size, int current)
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

char *infin_sub_main(char *nb_a, char *nb_b)
{
    int max_size = 0;
    int size_mal = size_malloc_sub(nb_a, nb_b, &max_size);
    char *result = malloc(sizeof(char) * size_mal);
    int index_a = 0;
    int index_b = 0;
    int retenue = 0;
    char r;

    result[max_size] = '\0';
    result[0] = '0';
    for (int i = max_size  -1; i >= 0; i--) {
        int index_r = i + 1;
        index_a = calc_index_sub(nb_a, max_size, i);
        index_b = calc_index_sub(nb_b, max_size, i);
        r = sub_calc(nb_a[index_a], nb_b[index_b], &retenue);
        *(result + index_r) = r;
    }
    if (retenue > 0) {
        result[0] = '-';
    }
    return (result);
}

char *infin_sub(char *nb_a, char *nb_b, char *base, char *ops)
{
    nb_a = transform_back(nb_a, base);
    nb_b = transform_back(nb_b, base);
    int size_b = length(nb_b);
    int max_in = length(nb_a);
    char *r;
    if (max_in < size_b) {
        max_in = size_b;
        r = infin_sub_main(nb_b, nb_a);
        r[0] = '-';
    } else if (max_in == size_b && nb_a[0] < nb_b[0]) {
        r = infin_sub_main(nb_b, nb_a);
        r[0] = '-';
    } else {
        r = infin_sub_main(nb_a, nb_b);
    }
    r = shorter_array(r, ops);
    r = transform(r, base);
    return (r);
}