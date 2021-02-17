/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sort int array
*/

int sort_number(int *array, int size)
{
    for (int i = 1; i < size; i++) {
        int value_a = *(array + i);
        int value_b = *(array + (i - 1));
        if (value_b > value_a) {
            *(array + i) = value_b;
            *(array + (i - 1)) = value_a;
        }
    }
    return (0);
}

void my_sort_int_array(int *array, int size)
{
    int finish = 0;

    while (finish == 0) {
        sort_number(array, size);
        int test = 1;
        for (int i = 1; i < size; i++) {
            int value_a = *(array + i);
            int value_b = *(array + (i - 1));
            if (value_b > value_a) {
                test = 0;
            }
        }
        if (test == 1) {
            finish = 1;
        }
    }
}
