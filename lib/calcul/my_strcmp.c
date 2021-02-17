/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** verify equality between two string
*/

int my_strlen(char const *str);

int my_strcmp_calc(char const *s1, char const *s2)
{
    unsigned int val1 = 0;
    unsigned int val2 = 0;
    int current = 0;
    while (val1 == val2) {
        val1 = s1[current] + 1;
        val2 = s2[current] + 1;
        current ++;
        if (s1[current] == '\0')
            return (val1 - val2);
    }

    return (val1 - val2);
}
