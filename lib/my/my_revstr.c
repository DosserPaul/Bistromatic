/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverse string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    int changing_number = (int) size / 2;

    for (int i = 0; i < changing_number; i ++) {
        int target_char = (size - 1) - i;
        char target = str[target_char];
        str[target_char] = str[i];
        str[i] = target;
    }
    return (str);
}
