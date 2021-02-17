/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** verify if str is printable
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int size = my_strlen(str);
    for (int i = 0; i < size; i ++) {
        char val = str[i];
        if ((val < 32 && val != 0 && val != 12) || val > 126)
            return (0);
    }
    return (1);
}
