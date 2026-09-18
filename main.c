/*
Author: Kaleb Blakemore
KUID: 3228599
Date: 09/11/2026
Lab: Lab #2
Last modified: 09/13/2026
Purpose: Main driver program to read an integer and test whether it is odd or even
*/

#include "is0dd.h"
#include <stdio.h>

int main() {
    int num;
    
    // Prompt the user for an integer
    printf("Enter an integer: ");
    
    // Read the integer from standard input
    scanf("%d", &num);
    
    // Call the isOdd function to check and print if it's odd or even
    isOdd(num);
    
    return 0; // Return 0 to indicate successful execution
}