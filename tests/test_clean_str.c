/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/


#include <criterion/criterion.h>
char *clean_str(char *prev);
Test(clean_str, clean_over_space)
{
    char *str = "Hello           world  ";
    char *dup = clean_str(str);
cr_assert_str_eq(dup, "Hello world");
}

Test(clean_str, clean_oveer_space)
{
    char *str = "Hello world";
    char *dup = clean_str(str);
    cr_assert_str_eq(dup, "Hello world");
}
