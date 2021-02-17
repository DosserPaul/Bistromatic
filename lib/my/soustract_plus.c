/*
** EPITECH PROJECT, 2020
** verif_minus
** File description:
** return the number value of char
*/

void my_putchar(char c);
int my_get_char_number(char c, int i);
int my_strlen(char const *str);
char modify_number_in_char(char c, int value);

int last_result(char **av, int i_a, int i_b)
{
    int a = my_get_char_number(av[1][i_a + 1], i_a + 1);
    int b = my_get_char_number(av[2][i_b + 1], i_b + 1);
    return ((a - b)%10);
}

int result_soustract(char **av, int *i_a, int *i_b, int *signe)
{
    if (*i_b < -1)
        *i_b = -1;
    if (*i_a < -1)
        *i_a = -1;
    int to_return = 0;
    if (av[2][*i_b] > av[1][*i_a]) {
        int a1 = my_get_char_number(av[1][*i_a], *i_a);
        int b1 = my_get_char_number(av[2][*i_b], (*i_b));
        int val = 10 + a1;
        if (av[2][0] == '-')
            *signe = 1;
        if (*i_a >= 0)
            *i_a  = *i_a - 1;
        to_return = val - b1;
        av[1][*i_a - 1] = modify_number_in_char(av[1][*i_a], 1);
        return (to_return);
    }
    int a = my_get_char_number(av[1][*i_a], *i_a);
    int b = my_get_char_number(av[2][*i_b], (*i_b));
    to_return = a - b;
    return (to_return);
}

int can_calcul_sous(char **av, int i_a, int i_b)
{
    if (i_b < 0 && i_a == 0) {
        if (av[1][i_a] == '-')
            return (0);
    }
    if (i_a < 0 && i_b == 0) {
        if (av[2][i_b] == '-')
            return (0);
    }

    return (1);
}

void print_soustraction(int i_a, int i_b, int r)
{
    if (r == 0) {
        if (i_a == 0 && i_b < 0)
            return;
        if (i_b == 0 && i_a < 0)
            return;
    }
    if (i_b <= 0 && i_a <= i_b + 1 && r == 0)
        return;
    if (i_a <= 0 && i_b <= i_a + 1 && r == 0)
        return;
    my_putchar((r + 48));
}

void verif_minus_sous(char **av, int i_a, int i_b, int signe)
{
    int a = my_get_char_number(av[1][i_a], 0);
    int b = my_get_char_number(av[2][i_b], 0);
    if (a >= (b * -1) || a >= b)
        return;
    if (last_result(av, i_a, i_b) == 0 && i_a <= 0 && i_b <= 0) {
        return;
    }
    if (av[2][i_b] == '-' && i_a < 0 && signe == 0) {
        my_putchar('-');
        return;
    }
    if (av[1][i_a] == '-' && i_b < 0 && signe == 0) {
        my_putchar('-');
        return;
    }
}