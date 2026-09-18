/*
Author: Kaleb Blakemore
KUID: 3228599
Date: 09/11/2026
Lab: Lab #2
Last modified: 09/13/2026
Purpose: Function to determine whether an input integer is odd or even
*/

#include "is0dd.h"
#include <stdio.h>

int isOdd(int num) {
    // Check if the number is odd using the modulo operator
    if (num % 2 != 0) {
        printf("%d is odd.\n", num);
        return 1; // Returns 1 if the number is odd
    } else {
        printf("%d is even.\n", num);
        return 0; // Returns 0 if the number is even
    }
}