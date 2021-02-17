/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** verif if str is num
*/

int my_strlen(char const *str);

int my_str_isnum(char *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i++) {
        if ((str[i] < 48 || str[i] > 57) && str[i] != 0)
            return (0);
    }
    return (1);
}
