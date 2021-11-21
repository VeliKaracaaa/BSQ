/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct my_s
{
    char *buffer;
    char **array;
    int nb_line;
    int **int_array;
    int nb_column;
    int x;
    int y;
    int square;
} my_t;

int open_and_read(char **av, my_t *my);
void malloc_new_array(my_t *my);
int error(int ac, char **av, my_t *my);
void malloc_array_int(my_t *my);
void fille_int_array(my_t *my);
void loop_algo(my_t *my);
void loop_alg_2(my_t *my, int i, int j);
void display_array(my_t *my);
char **fille_array(my_t *my);

int my_compute_power_rec(int nb ,int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str , int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest ,char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a , int *b);
