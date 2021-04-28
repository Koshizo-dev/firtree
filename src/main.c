/*
** EPITECH PROJECT, 2020
** firtree
** File description:
** main
*/

#include <stdlib.h>

void my_putstr(char const *);

int my_isnum(char const *);

void tree(int);

int main(int argc, char **argv)
{
    if (argc != 2) {
        my_putstr("Please enter a size\n");
        return (84);
    }
    if (!my_isnum(argv[1])) {
        my_putstr("Please enter a valid size\n");
        return (84);
    }
    tree(atoi(argv[1]));
}