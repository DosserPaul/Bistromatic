/*
** EPITECH PROJECT, 2020
** length_double_array
** File description:
** get the length of double char array
*/

int length_double_array(char * const *str)
{
    int i = 0;
    while (str[i][0] != '\0' || str[i][0] != 0 || str[i] == 0) {
        i ++;
    }

    return (i);
}
