/*
** EPITECH PROJECT, 2019
** array
** File description:
** char_array
*/

#include "my.h"

void malloc_new_array(my_t *my)
{
    int counter_buffer = 0;
    int count = 0;
    int x = 0;
    int j_array = 0;

    my->array = malloc(sizeof(char *) * (my->nb_line + 1));
    for (; my->buffer[counter_buffer] != '\n'; counter_buffer++);
    counter_buffer++;
    while (count != my->nb_line) {
        while (my->buffer[counter_buffer] != '\n' && my->buffer[counter_buffer] != '\0') {
            counter_buffer++;
            x++;
        }
        counter_buffer++;
        my->array[count] = malloc(sizeof(char) * (x + 1));
        x = 0;
        count++;
    }
}

char **fille_array(my_t *my)
{
    int k = 0;
    int i = 0;
    int j = 0;

    malloc_new_array(my);
    for (; my->buffer[k] != '\n'; k++);
    k++;
    while (my->nb_line > i) {
        if (my->buffer[k] == '\n') {
            my->array[i][j] = '\0';
            i++;
            j = 0;
            k++;
        }
        if (my->array[i] != NULL)
            my->array[i][j] = my->buffer[k];
        j++;
        k++;
    }
    my->array[i] = NULL;
}