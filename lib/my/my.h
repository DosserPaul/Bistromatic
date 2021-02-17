/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef MY_
#define MY_

int my_atoi(char *str);
int char_to_int(char c);
int calcul_index(int first, int index_max, int is_first, char **av);
char modify_number_in_char(char c, int value);
void print_soustraction(int index_a, int index_b, int r);
int can_calcul_sous(char **argv, int index_a, int index_b);
int result_soustract(char **argv, int *index_a, int *index_b, int *modif_signe);
void verif_minus_sous(char **argv, int index_a, int index_b, int modif_signe);
int last_result(char **argv, int index_a, int index_b);
int my_get_char_number(char c, int i);
int my_char_containumber(char const *str);
int my_compute_power_rec(int nb, int p);
int verif_square_number(int a, int b, int nb);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int convert_binary_dec(char const *str);
int get_dec_value(char c);
int convert_hexa_dec(char const *str);
int my_getnbr_base(char const*str, char const *base);
int get_char_number(char c);
int calcul_power(int nb, int p);
void get_start_end(int *start, int *end, char const *str, int size);
int my_getnbr(char const *str);
int my_is_digit(char c);
int is_divisable(int nb, int div);
int is_first_prime(int nb);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_float(float f, int nb_after_coma);
int my_put_nbr(int nb);
void my_putchar(char c);
int size_number_binary(int nb, int base, int *get_maxi);
char *decimal_to_binary(int nb);
char calcul_hexa(char first, char second, char third, char fourth);
char *binary_to_hexa(char *binary);
int my_putnbr_base(int nbr, char const *base);
int my_putstr(char *str);
char *my_revstr(char *str);
int my_show_word_array(char * const *argc);
void print_all_strtype(char const *str, int size);
void display_words(char const *str, int start, int end);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
int sort_number(int *array, int size);
void my_sort_int_array(int *array, int size);
int verifying_alpha_char(char c);
int my_str_isalpha(char const *str);
int in_down_case(char c);
int my_str_islower(char *str);
int my_str_isnum(char *str);
int my_str_isprintable(char const *str);
int is_uppercase(char c);
int my_str_isupper(char const *str);
int is_good(char c);
char *add_word(char const *str, int last, int end);
int words_in_array(char const *str, int last, char **all_words);
int start_last(char const *str, int begin);
char **my_str_to_word_array(char const *str);
int is_letter(char c);
void modification(char *c, char last_char);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
void verify_and_replace(char *c);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
int is_strstr(char *str, char const *to_find, int index, int size);
char *my_strstr(char *str, char const *to_find);
void verify_and_modify(char *c);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif /*MY_*/
