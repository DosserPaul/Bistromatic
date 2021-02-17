/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** change to str capitalize
*/

char *my_strlowcase(char *str);

char *my_strupcase(char *str);

int is_letter(char c)
{
    if ((c > 64 && c < 91) || (c > 96 && c < 123)) {
        return (1);
    }
    if ((c - 48) < 10 && (c - 48) >= 0) {
        return (1);
    }
    return (0);
}

void modification(char *c, char last_char)
{
    if (is_letter(*c) == 1) {
        if (is_letter(last_char) == 0){
            *c = *my_strupcase(c);
        } else {
            *c = *my_strlowcase(c);
        }
    }
}

char *my_strcapitalize(char *str)
{
    int size = 0;

    while (str[size] != 0)
        size ++;
    for (int i = 0; i <= size; i ++) {
        char *c = &str[i];
        char last = '=';
        if (i > 0)
            last = str[(i - 1)];
        modification(c, last);
    }

    return (str);
}
