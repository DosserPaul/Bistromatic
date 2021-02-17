/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** write number in terminal
*/

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb)
{
    if (nb <= -2147483648 || nb >= 2147483647) {
        if (nb < 0) {
            my_putstr("-2147483648");
            return (1);
        }
        my_putstr("2147483647");
        return (1);
    }
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}
