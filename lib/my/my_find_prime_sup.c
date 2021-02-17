/*
** EPITECH PROJECT, 2020
** my_finc_prime_sup
** File description:
** return the next prime number
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (my_is_prime(i) == 0) {
        i++;
    }
    return (i);
}
