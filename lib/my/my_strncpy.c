/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copy str in other
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int size = 0;
    while (src[size] != '\0')
        size ++;

    if (n > size)
        n = size;

    for (int i = 0; i < n; i ++) {
        *(dest + i) = src[i];
    }

    if (n == size)
        *(dest + n) = '\0';

    return dest;
}
