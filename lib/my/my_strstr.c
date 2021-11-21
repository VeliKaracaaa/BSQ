/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** task 05
*/

#include <unistd.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int tmp = 0;

    for (;str[i] != '\0'; i++)
        for (tmp = i; to_find[j] == str[i]; j++, i++)
            if (to_find[j + 1])
                return (&str[tmp]);
    return (NULL);
}
