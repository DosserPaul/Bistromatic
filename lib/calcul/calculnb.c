/*
** EPITECH PROJECT, 2020
** calcul_nb
** File description:
** get int from nb
*/

char *calcul_parentesis(char **str_ptr, char *base, char*ops);
char *number(char **str_ptr, char *base);

char *get_nb(char **str_ptr, char *base, char *ops)
{
    char *nb;
    if (**str_ptr == ops[0]) {
        nb = calcul_parentesis(str_ptr, base, ops);
    } else {
        nb = number(str_ptr, base);
    }
    return (nb);
}