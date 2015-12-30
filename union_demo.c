/*
 *   union_demo.c
 *   c.avimehenwal
 * 
 *   Created by avimehenwal on 30/12/15.
 *   Copyright (c) 2015 avimehenwal. All rights reserved.
 */

#include <stdio.h>
#include <string.h>

union Data {
    int   i;
    float f;
    char  str[20];
};

int main() {

    union Data data;

    // union holds memory required by largest member of union
    printf( "Memory size occupied by data : %d\n", sizeof(data));

    // union over-writes the values
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");

    printf( "data.i   : %d\n", data.i);
    printf( "data.f   : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
    
    return 0;
}
