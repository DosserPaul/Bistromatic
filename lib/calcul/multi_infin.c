/*
** EPITECH PROJECT, 2020
** multi infin
** File description:
** multi
*/
#include <stdlib.h>
#include "../my/my.h"

char *infin_add(char *nb_a, char *nb_b, char *base, char *ops);
char *infin_sub(char *nb_a, char *nb_b, char *base, char *ops);
int my_strcmp_calc(char const *s1, char const *s2);
int length(char *str);

char *inverse_multi(char *r, char *base, char *ops)
{
    char *one = malloc(sizeof(char) * 2);
    one[0] = '1';
    one[1] = 0;
    char *result = infin_add(r, one, base, ops);
    result = infin_sub(one, result, base, ops);
    return (result);
}

char *infin_multi(char *a, char *b, char *base, char *ops)
{
    char *r = malloc(sizeof(char)*2);
    r [0] = '0';
    r [1] = 0;
    if (length(b) > 5)
        return (r);
    if (length(b) > 5)
        return (r);
    char *sub = malloc(sizeof(char)*2);
    sub [0] = '1';
    sub [1] = 0;
    while (my_strcmp_calc(b, "0") != 0) {
        r = infin_add(r, a, base, ops);
        b = infin_sub(b, sub, base, ops);
    }
    if (a[0] == '-' && b[0] != '-') {
        r = inverse_multi(r, base, ops);
    } else if(a[0] == '-' && b[0] != '-') {
        r = inverse_multi(r, base, ops);
    }
    return (r);
}
