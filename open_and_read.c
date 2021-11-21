/*
** EPITECH PROJECT, 2019
** open and rread
** File description:
** open_and_read
*/

#include "my.h"

int open_and_read(char **av, my_t *my)
{
    int fd = open(av[1], O_RDONLY);
    struct stat st;

    stat(av[1], &st);
    if (fd == -1)
        return (84);
    my->buffer = malloc(sizeof(char) * (st.st_size + 1));
    read(fd, my->buffer, st.st_size);
    close (fd);
    return (0);
}