/*
Author: Kaleb Blakemore
KUID: 3228599
Date: 09/11/2026
Lab: Lab #2
Last modified: 09/11/2026
Purpose: Function to determine whether a number is odd or even
*/

#include "isOdd.h"
#include <stdio.h>

int isOdd(int num) {
    if (num % 2 != 0) {
        printf("%d is odd.\n", num);
        return 1; // Returns 1 if odd
    } else {
        printf("%d is even.\n", num);
        return 0; // Returns 0 if even
    }
}