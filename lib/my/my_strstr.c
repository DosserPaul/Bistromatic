/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find refernce
*/
#include <stddef.h>

int my_strlen(char const *str);

int is_strstr(char *str, char const *to_find, int index, int size)
{
    int size_find = my_strlen(to_find);
    if (size_find > (size - index)) {
        return (0);
    }
    for (int i = index; i < (size_find + index); i ++) {
        int index_find = i - index;
        if (str[i] != to_find[index_find])
            return (0);
    }

    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    if (my_strlen(to_find) == 0)
        return (str);
    int size = my_strlen(str);
    for (int i = 0; i < size; i ++) {
        if (str[i] == to_find[0] && is_strstr(str, to_find, i, size) == 1)
            return (str + i);
    }
    return NULL;
}
