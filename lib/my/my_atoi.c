/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_atoi
*/

int my_strlen(char *str);

int my_atoi(char *str)
{
    int result = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        result = (result * 10) + (str[i] - 48);
    }
    return (result);
}