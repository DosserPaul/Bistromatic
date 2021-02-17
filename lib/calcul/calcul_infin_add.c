/*
** EPITECH PROJECT, 2020
** calcul_infin_add
** File description:
** calcul_infin_add
*/

int calc_index(char *nb, int max_size, int current);
char addition_calc(char a, char b, int *retenue);

int calcul_infin_add(char *nb_a, char*nb_b, char *result, int max_size)
{
    int index_a = 0;
    int index_b = 0;
    int retenue = 0;
    for (int i = max_size  -1; i >= 0; i--) {
        int index_r = i + 1;
        index_a = calc_index(nb_a, max_size, i);
        index_b = calc_index(nb_b, max_size, i);
        char r = addition_calc(nb_a[index_a], nb_b[index_b], &retenue);
        *(result + index_r) = r;
    }
    return (retenue);
}