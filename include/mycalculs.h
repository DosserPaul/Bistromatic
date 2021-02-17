/*
** EPITECH PROJECT, 2020
** my_calcul
** File description:
** get all functions
*/

#ifndef CALCULS_
#define CALCULS_

int calcul_summand(char **str_ptr, char operator, int nb, int second);
int calculs(int a, int b, char ope);
int is_prioritaire(char c);
char get_operator(char **str_ptr);
int summands(char **str_ptr);
int get_second(char **str_ptr);
int get_nb(char **str_ptr);
int calcul_parentesis(char **str_ptr);
char *get_calcul_parenthesis(char **str);
int get_last_parenthesis(char *str);
int length(char *str);
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulo(int a, int b);
int number(char **str_ptr);
int power_rec(int nb, int p);
int get_power(int nb);
int is_int(char c);
char *shorter_array(char *array);
char *infin_sub(char *nb_a, char *nb_b);

#endif /*CALCULS_*/