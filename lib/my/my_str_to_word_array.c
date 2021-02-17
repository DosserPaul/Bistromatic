/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** str to word array
*/
#include <stdlib.h>
#include "my.h"

int nb_words_array(char const *str, int begin);

int my_strlen(char const *str);

int is_good(char c)
{
    if (c > 64 && c < 91)
        return (1);
    if (c > 96 && c < 123)
        return (1);
    if ((c-48) > -1 && (c - 48) < 10)
        return (1);
    return (0);
}

char *add_word(char const *str, int last, int end)
{
    int size = end - last;
    char *c = malloc(sizeof(char) * (size + 1));
    for (int i = last; i < end; i ++) {
        int index = i - last;
        c[index] = str[i];
    }
    c[size] = '\0';
    return (c);
}

int words_in_array(char const *str, int last, char **all_words)
{
    int i = last;
    int end = 0;
    int current_word = 0;
    int in_word = 1;
    while (str[i] != 0) {
        if (is_good(str[i]) == 0 && in_word == 1) {
            in_word = 0;
            end = i;
            *(all_words + current_word) = add_word(str, last, end);
            current_word ++;
        } else if (is_good(str[i]) == 1 && in_word == 0) {
            in_word = 1;
            last = i;
        }
        i ++;
    }

    if (is_good(str[i - 1])) {
        *(all_words + current_word) = add_word(str, last, i);
    }
    return (0);
}

int start_last(char const *str, int begin)
{
    int i = begin;
    int size = my_strlen(str);
    while (is_good(str[i]) == 0 && str[i] != 0) {
        i ++;
    }
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    int last = start_last(str, 0);
    int nb_words = nb_words_array(str, last);
    char **all_words = malloc(sizeof(char *) * (nb_words + 1));
    words_in_array(str, last, all_words);
    char end = '\0';
    all_words[nb_words] = &end;
    return (all_words);
}
