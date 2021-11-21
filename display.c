/*
** EPITECH PROJECT, 2019
** dispplay
** File description:
** display
*/

#include "my.h"

void malloc_array_int(my_t *my)
{
    int count = 0;
    int x = 0;
    my->nb_column = my_strlen(my->array[0]);

    my->int_array = malloc(sizeof(int *) * (my->nb_line + 1));
    while (count != my->nb_line) {
        my->int_array[count] = malloc(sizeof(int) * my->nb_column);
        count++;
    }
}

void fille_int_array(my_t *my)
{
    malloc_array_int(my);
    for (int i = 0; i != my->nb_line; i++) {
        for (int j = 0; j != my->nb_column; j++) {
            my->int_array[i][j] = -1;
        }
    }
    for (int i = 0; i != my->nb_column; i++) {
        if (my->array[0][i] == '.')
            my->int_array[0][i] = 1;
        if (my->array[0][i] == 'o')
            my->int_array[0][i] = 0;
    }
    for (int j = 0; j != my->nb_line; j++) {
        if (my->array[j][0] == '.')
            my->int_array[j][0] = 1;
        if (my->array[j][0] == 'o')
            my->int_array[j][0] = 0;
    }
}

void loop_algo(my_t *my)
{
    int i = 1;
    int j = 1;

    while (i != my->nb_line) {
        while (j != my->nb_column) {
            loop_alg_2(my, i, j);
            j++;
        }
        j = 1;
        i++;
    }
}

void loop_alg_2(my_t *my, int i, int j)
{
    int tmp = my->int_array[i][j - 1];

    if (my->array[i][j] == 'o') {
        my->int_array[i][j] = 0;
        return;
    }
    if (my->int_array[i - 1][j - 1] < tmp)
        tmp = my->int_array[i - 1][j - 1];
    if (my->int_array[i - 1][j] < tmp)
        tmp = my->int_array[i - 1][j];
    my->int_array[i][j] = tmp + 1;
    if (my->int_array[i][j] > my->square) {
        my->square = my->int_array[i][j];
        my->y = i;
        my->x = j;
    }
}

void display_array(my_t *my)
{
    for (int i = my->y - (my->square - 1); i <= my->y; i++) {
        for (int j = my->x - (my->square - 1); j <= my->x; j++) {
            my->array[i][j] = 'x';
        }
    }
    for(int i = 0; my->array[i] != NULL; i++) {
        my_putstr(my->array[i]);
        my_putchar('\n');
    }
}