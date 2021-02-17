/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** verif if str is upper
*/

int my_strlen(char const *str);

int is_uppercase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c == 0)
        return (1);
    return (0);
}

int my_str_isupper(char const *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i ++) {
        if (is_uppercase(str[i]) == 0)
            return (0);
    }
    return (1);
}
