/*
** EPITECH PROJECT, 2020
** test_eval
** File description:
** do calcul with priority
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mycalculs.h"

char *eval_expr(char *base, char *ops, char *expr, int size)
{
    char *new_str = malloc(sizeof(char) * (size + 1));
    char *cpy = new_str;
    new_str = expr;
    char *r = summands(&new_str, base, ops);
    new_str = cpy;
    free(new_str);
    r = transform_back(r, base);
    r = shorter_array(r, ops);
    return (transform(r, base));
}