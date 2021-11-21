/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** task 01
*/

void my_swap(int* a , int *b);

void my_swap(int *a , int *b)
{
    int tmp = 0;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
