/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** task 04
*/

void my_putchar(char c);

int my_isneg(int n)
{
    char print = 'N';
    char print_2 = 'P';

    if (n < 0) {
        my_putchar(print);
        my_putchar('\n');
    }
    else if (n >= 0) {
        my_putchar(print_2);
        my_putchar('\n');
    }
    return (0);
}
