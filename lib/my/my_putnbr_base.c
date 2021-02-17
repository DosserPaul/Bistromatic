/*
** EPITECH PROJECT, 2020
** my_putnbr_base
** File description:
** put nbr base
*/
#include <stdlib.h>

int my_compute_power_rec(int nb, int p);

int my_putstr(char *str);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_strlen(char const *str);
char *my_strlowcase(char *str);
int size_number_binary(int nb, int base, int *get_maxi)
{
    int to_return = -1;
    while (*get_maxi < nb) {
        to_return += 4;
        int result_power = my_compute_power_rec(2, to_return);
        *get_maxi = result_power;
    }

    return (to_return);
}

int decimal_to_binary(int nb)
{
    int get_maxi = 0;
    int size = size_number_binary(nb, 2, &get_maxi);
    int current = 0;
    while (get_maxi >= 1) {
        if (nb >= get_maxi) {
            nb -= get_maxi;
            my_putchar('1');
            get_maxi = get_maxi / 2;
        } else {
            my_putchar('0');
            get_maxi = get_maxi / 2;
        }
        current ++;
    }
    return (0);
}

char calcul_hexa(int nb)
{
    if (nb <= 9) {
        return (nb + 48);
    } else {
        return (nb + 55);
    }
}

int dec_to_hexa(int nb, int min)
{
    int remainder = 0;
    int result = nb / 16;
    remainder = nb - (result * 16);
    char c [2];
    c[1] = 0;
    c[0] = calcul_hexa(remainder);
    if (result > 0) {
        dec_to_hexa(result, min);
    }
    if (min) {
            my_strlowcase(c);
    }
    my_putchar(c[0]);
    return (0);
}

int my_putnbr_base(int nbr, char const *base)
{
    if (nbr >= 2147483647 || nbr <= -2147483648)
        return (0);
    if (my_strlen(base) == 2) {
        decimal_to_binary(nbr);
    } else if (my_strlen(base) == 16) {
        if (base[15] == 'f') {
            dec_to_hexa(nbr, 1);
        } else {
            dec_to_hexa(nbr, 0);
        }
    } else {
        my_put_nbr(nbr);
    }
    return (0);
}
