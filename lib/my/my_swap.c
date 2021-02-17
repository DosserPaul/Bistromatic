/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** change value between a and b
*/

void my_swap(int *a, int *b)
{
    int content_a = *a;
    *a = *b;
    *b = content_a;
}
