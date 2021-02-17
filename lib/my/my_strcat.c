/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** description strcat
*/

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int size = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[(i + size)] = src[i];
        i ++;
    }
    dest[(i + size)] = '\0';
    return (dest);
}
