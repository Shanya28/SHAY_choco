/*
** EPITECH PROJECT, 2025
** str
** File description:
** len
*/

#include <stdio.h>
#include <criterion/criterion.h>
int my_strlen(char const *str);
Test(my_strlen, calculate_length_of_a_string)
{
int a = my_strlen("hello");
int b = strlen("hello");
cr_assert_eq(a, b);

}

Test(my_strlen, calcul_length_of_a_string)
{
    int a = my_strlen(" ");
    int b = strlen(" ");
    cr_assert_eq(a, b);
}

Test(my_strlen, calcul_lengthh_of_a_string)
{
    int a = my_strlen("77");
    int b = strlen("77");
    cr_assert_eq(a, b);
}
