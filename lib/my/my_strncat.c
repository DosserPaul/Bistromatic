/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** my_strncat
*/

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int size = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        if (nb <= 0)
            break;
        dest[(i + size)] = src[i];
        i ++;
        nb --;
    }

    dest[(i + size)] = '\0';
    return (dest);
}
