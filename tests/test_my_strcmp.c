/*
** EPITECH PROJECT, 2024
** test
** File description:
** strncmp
*/
#include <criterion/criterion.h>
#include <string.h>
int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, compare_twoo_strings)
{
    int i = my_strcmp("hello", "hello");
    int j = strcmp("hello", "hello");
    cr_assert_eq(i, j);
}

Test(my_strcmp, comp_two_strings)
{
    int i = my_strcmp("44", "44");
    int j = strcmp("44", "44");
    cr_assert_eq(i, j);
}
