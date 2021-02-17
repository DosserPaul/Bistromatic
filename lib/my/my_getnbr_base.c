/*
** EPITECH PROJECT, 2020
** my_getnbr_base
** File description:
** return decimal value of current base
*/

int my_strlen(char const *str);

int my_getnbr(char const *str);

int my_compute_power_rec(int nb, int p);

int convert_binary_dec(char const *str)
{
    int length = my_strlen(str);
    int result = 0;
    for (int i = (length - 1); i >= 0; i --) {
        if (str[i] == '1') {
            int power = (length - 1) - i;
            result += my_compute_power_rec(2, power);
        }
    }
    return (result);
}

int get_dec_value(char c)
{
    if (c > 47 && c < 58)
        return ((c - 48));
    if (c > 64 && c < 71)
        return ((c - 65 + 10));
    return (0);
}

int convert_hexa_dec(char const *str)
{
    int length = my_strlen(str);
    int result = 0;
    for (int i = (length - 1); i >= 0; i --) {
        int power = length - i - 1;
        int value = get_dec_value(str[i]);
        result += (value * my_compute_power_rec(16, power));
    }
    return (result);
}

int my_getnbr_base(char const *str, char const *base)
{
    int to_return = 0;
    if (my_strlen(base) == 2) {
        to_return = convert_binary_dec(str);
        return (to_return);
    }
    if (my_strlen(base) == 16) {
        to_return = convert_hexa_dec(str);
        return (to_return);
    }
    if (my_strlen(base) == 10) {
        to_return = my_getnbr(str);
        return (to_return);
    }
    return (to_return);
}
