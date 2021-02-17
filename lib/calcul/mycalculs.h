/*
** EPITECH PROJECT, 2020
** my_calcul
** File description:
** get all functions
*/

#ifndef CALCULS_
#define CALCULS_

int calcul_infin_add(char *nb_a, char*nb_b, char *result, int max_size);
char *infin_multi(char *a, char *b, char *base, char *ops);
int my_strcmp_calc(char const *s1, char const *s2);
char *transform_back(char *array, char *base);
int get_id_base(char c, char *base);
char *transform(char *array, char *base);
int nb_zero_useless(char *array);
void init_new_char(char *array, char *new_c, int useless, int new_size);
char *shorter_array(char *array, char *ops);
int equal_inf(char *nb_a, char *nb_b);
int calc_index_equa(int index, int size_array, int max);
int superior_infin(char *nb_a, char *nb_b);
int inferior_infin(char *nb_a, char *nb_b);
int size_malloc_add(char *nb_a, char *nb_b, int *max_size);
char addition_calc(char a, char b, int *retenue);
int calc_index(char *argv, int max_size, int current);
void init_char(char *re, int max_size);
char *infin_sub(char *nb_a, char *nb_b, char *base, char *ops);
char *infin_add(char *nb_a, char *nb_b, char *base, char *ops);
int calcul_summand(char **str_ptr, char ope, int nb, int second);
int calculs(int a, int b, char ope);
int is_prioritaire(char c);
char get_operator(char **str_ptr);
char *summands(char **str_ptr, char *base, char *ops);
int get_second(char **str_ptr);
char *get_nb(char **str_ptr, char *base);
char *calcul_parentesis(char **str_ptr, char *base, char*ops);
char *get_calcul_parenthesis(char **str);
int get_last_parenthesis(char *str);
int length(char *str);
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulo(int a, int b);
char *number(char **str_ptr, char *base);
int power_rec(int nb, int p);
int get_power(int nb);
int is_int(char c);

#endif /*CALCULS_*/