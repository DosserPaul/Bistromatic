/*
** EPITECH PROJECT, 2020
** number
** File description:
** number
*/

#include <stdlib.h>

int length(char *str);
char *transform(char *array, char *base);
char *transform_back(char *array, char *base);

int is_int(char c, char *base)
{
    for (int i = 0; i < length(base); i++){
        if (c == base[i]) {
            char to_verif[2];
            to_verif[0] = c;
            to_verif[1] = 0;
            return (1);
        }
    }
    return (0);
}

int index_newstr(int error87, int current)
{
    if (error87) {
        return (current + 1);
    }
    return (current);
}

char *number(char **str_ptr, char *base)
{
    int power = 0;
    int error87 = 0;
    int size = 0;
    if (**str_ptr == '-') {
        error87 = 1;
        *str_ptr = *str_ptr + 1;
    }
    if (**str_ptr == '+')
        *str_ptr = *str_ptr + 1;
    while (is_int((*str_ptr)[size], base)) {
        size++;
    }
    char *nb = malloc(sizeof(char) * (size + 1));
    for (int i = 0; i < size; i++) {
        nb[index_newstr(error87, i)] = (*str_ptr)[i];
    }
    while (is_int(**str_ptr, base))
        *str_ptr = *str_ptr + 1;
    if (error87)
        nb[0] = '-';
    return (nb);
}