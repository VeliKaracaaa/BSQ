/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include "my.h"

int main(int ac, char **av)
{
    my_t my;
    my.x = 0;
    my.y = 0;
    my.square = 0;

    if (ac != 2)
        return (84);
    if (open_and_read(av, &my) == 84)
        return (84);
    if (error(ac, av, &my) == 84)
        return (84);
    fille_array(&my);
    fille_int_array(&my);
    loop_algo(&my);
    display_array(&my);
}