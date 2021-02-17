/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    unsigned int val1 = 0;
    unsigned int val2 = 0;
    int current = 0;
    while (n > 0) {
        val1 = s1[current] + 1;
        val2 = s2[current] + 1;
        current ++;
        n --;
        if (val1 != val2)
            return (val1 - val2);
        if (s1[current] == '\0')
            return (val1 - val2);
    }
    return (val1 - val2);
}
