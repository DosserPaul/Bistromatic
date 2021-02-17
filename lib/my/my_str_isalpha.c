/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** verif str is alpha
*/

int my_strlen(char const *str);

int verifying_alpha_char(char c)
{
    if (c > 64 && c < 91)
        return (1);
    if (c > 96 && c < 123)
        return (1);
    if (c == 0)
        return (1);

    return (0);
}

int my_str_isalpha(char const *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i++) {
        if (verifying_alpha_char(str[i]) == 0)
            return (0);
    }
    return (1);
}
