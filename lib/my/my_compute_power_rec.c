/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** task 04
*/

int my_compute_power_rec(int nb ,int p)
{
    int result;

    if (p <  0)
        return (0);
    else if (p == 0)
        return (1);
    else 
        nb = nb * my_compute_power_rec(nb, p - 1); 
    return (nb);
}
