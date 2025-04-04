/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** Counting character within a string
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] > '\0') {
    x++;
    }
    return (x);
}

int main(void)
{
    printf("%d\n", my_strlen("Annaelle"));
}
