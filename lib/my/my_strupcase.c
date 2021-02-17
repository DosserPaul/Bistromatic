/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** make all chars in upcase
*/

void verify_and_modify(char *c)
{
    for (int i = 97; i < 123; i++) {
        char value = i;
        if (*c == value) {
            *c = (i - 32);
            return;
        }
    }
    return;
}

char *my_strupcase(char *str)
{
    int size = 0;

    while (str[size] != 0) {
        size ++;
    }

    for (int i = 0; i < size; i ++) {
        verify_and_modify((str + i));
    }

    return (str);
}
