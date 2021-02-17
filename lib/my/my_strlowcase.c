/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** my_strlowcase
*/

void verify_and_replace(char *c)
{
    for (int i = 65; i < 92; i ++) {
        char value = i;
        if (*c == value) {
            *c = (i + 32);
        }
    }
}

char *my_strlowcase(char *str)
{
    int size = 0;

    while (str[size] != 0)
        size ++;

    for (int i = 0; i <= size; i ++) {
        char *c = (str + i);
        verify_and_replace(c);
    }

    return (str);
}
