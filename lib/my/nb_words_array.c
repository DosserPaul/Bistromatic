/*
** EPITECH PROJECT, 2020
** nb_words_array
** File description:
** get nb of word in array
*/

int is_good(char c);

int my_strlen(char const *str);

int nb_words_array(char const *str, int begin)
{
    int nb_words = 0;
    int i = begin;
    int in_word = 1;

    while (str[i] != 0) {
        if (is_good(str[i]) == 0 && in_word == 1) {
            in_word = 0;
            nb_words ++;
        } else if (is_good(str[i]) == 1 && in_word == 0) {
            in_word = 1;
        }
        i ++;
    }

    if (is_good(str[i - 1]) == 1)
        nb_words ++;

    return (nb_words);
}
