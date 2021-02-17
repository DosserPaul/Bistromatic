/*
** EPITECH PROJECT, 2020
** tranform
** File description:
** transform base 10 in base want
*/

int length(char *str);

char *transform(char *array, char *base)
{
    for (int i = 0; i < length(array); i++) {
        if (array[i] != '-')
            array[i] = base[(array[i] - 48)];
    }
    return (array);
}

int get_id_base(char c, char *base)
{
    for (int i = 0; i < length(base); i++) {
        if (c == base[i])
            return (i);
    }
    return (0);
}

char *transform_back(char *array, char *base)
{
    for (int i = 0; i < length(array); i++) {
        if (array[i] != '-')
            array[i] = (get_id_base(array[i], base) + 48);
    }
    return (array);
}