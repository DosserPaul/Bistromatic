/*
** EPITECH PROJECT, 2020
** header
** File description:
** header
*/

int char_to_int(char c)
{
    if (c >= '0' && c <= '9')
        return (c - 48);
    return (0);
}
