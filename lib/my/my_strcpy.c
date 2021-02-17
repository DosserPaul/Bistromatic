/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy str into another str 
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int size = my_strlen(src);

    for (int i = 0; i < size; i++) {
        *(dest + i) = src[i];
    }
    dest[size] = '\0';
    return (dest);
}
