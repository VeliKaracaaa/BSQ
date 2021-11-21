/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** task 01
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    int odd = 1;

    while (nb != 0) {
        if (nb < 0)
            return (0);
        nb = nb - odd;
        i++;
        odd = odd + 2;
    }
    return (i);
}
