/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** task 02
*/

#include <string.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[j] != '\0') {
        j++;
    }
    while (src[i] != '\0') {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j + 1] = '\0';
    return (dest);
}
