/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** return the value squared
*/

int verif_square_number(int a, int b, int nb)
{
    if ((a * b) == nb) {
        if (a == b) {
            return (1);
        }
    }
    return (0);
}

int my_compute_square_root(int nb)
{
    int result = 0;
    int i = 0;

    if (nb <= 0) {
        return (0);
    }
    while (result != 1) {
        i++;
        result = verif_square_number(i, i, nb);
    }
    return (i);
}
