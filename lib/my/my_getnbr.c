/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** description get number
*/

int my_strlen(char const *str);

int my_is_digit(char c);

int my_compute_power_rec(int nb, int p);

int get_char_number(char c)
{
    return (c - 48);
}

int calcul_power(int nb, int p)
{
    int result = nb;
    for (int i = 0; i < p; i ++) {
        result = result * 10;
    }
    return (result);
}

void get_start_end(int *start, int *end, char const *str, int size)
{
    for (int i = 0; i < size; i ++) {
        if (*start < 0 && my_is_digit(str[i]) == 1) {
            *start = i;
        }
        if (*end < 0 && *start >= 0 && my_is_digit(str[i]) == 0) {
            *end = i;
            break;
        }
    }
    if (*end < 0 && *start >= 0) {
        *end = size;
    }
}

int my_getnbr(char const *str)
{
    int start = -1;
    int end = -1;
    int result = 0;
    get_start_end(&start, &end, str, my_strlen(str));
    if (start == -1 && end == -1)
        return (0);
    if ((end - start) >= 10) {
        return (0);
    }
    for (int i = (end - 1); i >= start; i --) {
        result += calcul_power(get_char_number(str[i]), (end - 1) - i);
    }
    if (start > 0 && str[start - 1] == '-')
        result = result * (-1);
    return (result);
}
