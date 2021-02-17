/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** verif str is lower
*/

int my_strlen(char const *str);

int in_down_case(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c == 0)
        return (1);
    return (0);
}

int my_str_islower(char const *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i ++) {
        if (in_down_case(str[i]) == 0)
            return (0);
    }
    return (1);
}
