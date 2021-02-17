/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** put words array
*/

void my_putchar(char c);
int my_putstr(char *str);
int length_double_array(char * const *strs);

int my_show_word_array(char * const *argc)
{
    int size_a = length_double_array(argc);

    for (int i = 0; i < size_a; i ++) {
        my_putstr(argc[i]);
        my_putchar(' ');
    }
    return (0);
}
