/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** description my_is_prime
*/

int is_divisable(int nb, int div)
{
    float f = (float) nb / div;
    if (f - (int) f == 0) {
        return (1);
    }
    return (0);
}

int is_first_prime(int nb)
{
    if (nb == 2)
        return (1);
    if (nb == 3)
        return (1);
    if (nb == 5)
        return (1);
    if (nb == 7)
        return (1);
    if (nb == 13)
        return (1);
    return (0);
}

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    if (is_first_prime(nb) == 1) {
        return (1);
    }
    for (int i = 2; i < (nb - 1); i ++) {
        if (is_divisable(nb, i) == 1) {
            return (0);
        }
    }
    return (1);
}
