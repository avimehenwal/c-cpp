/*
 *   swap_ints.c
 *   c.avimehenwal
 * 
 *   Created by avimehenwal on 29/12/15.
 *   Copyright (c) 2015 avimehenwal. All rights reserved.
 */

#include <stdio.h>

int swap_ints (int *first_number, int *second_number);

int main() {
    int a = 4, b = 7;

    printf(" pre-swap values: a==%d, b==%d\n", a, b);

    swap_ints (&a, &b);

    printf("post-swap values: a==%d, b==%d\n", a, b);

    return 0;
}

int swap_ints (int *first_number, int *second_number) {
    int temp;

    temp = *first_number;
    *first_number = *second_number;
    *second_number = temp;

    return 0;
}
