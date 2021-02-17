/*
** EPITECH PROJECT, 2020
** my_char_isnumber
** File description:
** return if char contain number
*/

int my_strlen(char const *str);

int my_char_containumber(char const *str)
{
    int length = my_strlen(str);
    for (int i = 0; i < length; i ++) {
        int value_char = str[i] - 48;
        if (value_char >= 0 && value_char < 10)
            return (1);
    }

    return (0);
}
