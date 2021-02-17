/*
** EPITECH PROJECT, 2020
** my_put_float
** File description:
** write float in terminal
*/

void my_putchar(char c);
int my_put_nbr(int nb);

int my_put_float(float f, int nb_after_coma)
{
    int equiv = (int) f;
    my_put_nbr(equiv);
    if (nb_after_coma == 0)
        return (1);
    my_putchar(',');
    f = f - equiv;
    for (int i = 0; i < nb_after_coma; i ++) {
        f = f * 10;
        int i_value = (int) f%10;
        my_put_nbr(i_value);
    }
    return (0);
}
