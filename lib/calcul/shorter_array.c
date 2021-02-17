/*
** EPITECH PROJECT, 2020
** shorter_array
** File description:
** shorter_array
*/

#include <stdlib.h>
#include "../my/my.h"

int length(char *str);

char *minus(char *array, int size, char *ops)
{
    for (int i = size - 2; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = ops[3];
}

int nb_zero_useless(char *array, char *ops)
{
    int i = 0;
    if (array[0] == ops[3])
        i++;
    while (array[i] == 48) {
        i ++;
        if (array[i] == 0)
            break;
    }
    return (i);
}

void init_new_char(char *array, char *new_c, int useless, int new_size)
{
    for (int i = 0; i < (new_size - 1); i ++) {
        new_c[i] = array[i + useless];
    }
    new_c[new_size - 1] = '\0';
}

char *shorter_array(char *array, char *ops)
{
    int size = length(array);
    int useless_o = nb_zero_useless(array, ops);
    if (size == useless_o) {
        char *new_c = malloc(sizeof(char) * 2);
        new_c[0] = '0';
        new_c[1] = '\0';
        return (new_c);
    } else if (useless_o > 0) {
        if (array[0] == ops[3])
            size ++;
        char *new_c = malloc(sizeof(char) * (size - useless_o + 1));
        init_new_char(array, new_c, useless_o, (size - useless_o + 1));
        if (array[0] == ops[3])
            new_c = minus(new_c, size, ops);
        return (new_c);
    }
    return (array);
}