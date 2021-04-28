/*
** EPITECH PROJECT, 2020
** firtree
** File description:
** my_putstr
*/

void my_putchar(char);

void my_putstr(char const *str)
{
    for (int i = 0; str[i]; my_putchar(str[i]), i++);
}