/*
** EPITECH PROJECT, 2020
** verif_important
** File description:
** calcul parenthesis
*/
#include <stdlib.h>
#include "../../include/my.h"

char *summands(char **str_ptr, char *base, char *ops);

int length(char *str)
{
    int i = 0;

    while (str[i] != 0)
        i++;
    return (i);
}

int get_last_parenthesis(char *str, char *ops)
{
    int size = length(str);
    int current_parent = 0;

    for (int i = 1; i < size; i ++) {
        if (str[i] == ops[0]) {
            current_parent ++;
        }
        if (str[i] == ops[1] && current_parent > 0){
            current_parent --;
        } else if (str[i] == ops[1] && current_parent == 0) {
            return (i);
        }
    }
    return (size);
}

char *get_calcul_parenthesis(char **str, char *ops)
{
    int size = length(*str);
    int last = get_last_parenthesis(*str, ops);
    size = size - (size - last);
    char *result = malloc(size);
    *str = *str + 1;
    for (int i = 0; i < size; i ++) {
        result[i] = **str;
        *str = *str + 1;
    }
    result[size - 1] = '\0';
    return (result);
}

char *calcul_parentesis(char **str_ptr, char *base, char*ops)
{
    char *calcul = get_calcul_parenthesis(str_ptr, ops);
    char *cpy = calcul;
    int size = length(calcul);
    char *result = summands(&calcul, base, ops);

    calcul = cpy;
    free(calcul);
    return (result);
}