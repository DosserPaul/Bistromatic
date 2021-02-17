/*
** EPITECH PROJECT, 2020
** my_get_char_number
** File description:
** return the number value of char
*/

int my_strlen(char const *str);

int my_get_char_number(char c, int i)
{
    if (i < 0)
        return (0);
    if (c >= '0' && c <= '9') {
        return (c - 48);
    }

    return (0);
}

int calcul_index(int first, int index_max, int is_first, char **av)
{
    int to_return = index_max;
    if (first) {
        if (is_first == 2)
            to_return = index_max -(my_strlen(av[2]) - my_strlen(av[1]));
    } else {
        if (is_first == 1)
            to_return = index_max - (my_strlen(av[1]) - my_strlen(av[2]));
    }
    if (to_return < 0)
        to_return = -1;
    return (to_return);
}

char modify_number_in_char(char c, int value)
{
    int val = my_get_char_number(c, 0);
    int new_val = val - value;
    return (new_val + 48);
}