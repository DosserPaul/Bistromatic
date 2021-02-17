/*
** EPITECH PROJECT, 2020
** my_showstr
** File description:
** description showstr
*/

int my_strlen(char const *str);

char *my_strlowcase(char *str);

void my_putchar(char c);

int my_putnbr_base(int nbr, char *base);

int my_str_isprintable(char const *str);

int my_showstr(char const *str)
{
    int length = my_strlen(str);
    for (int i = 0; i < length; i ++) {
        char target[2];
        target[0] = str[i];
        target[1] = 0;
        if (my_str_isprintable(target) == 0) {
            target[0] = *my_strlowcase(target);
            my_putchar('\\');
            my_putnbr_base(target[0], "0123456789abcdef");
        } else {
            my_putchar(target[0]);
        }
    }
    return (0);
}
