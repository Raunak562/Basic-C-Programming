// Finding the sum of digits of a number using "Recursion".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// Function Prototype
int sum_of_digits(int);

// main() function.
int main()
{
    // Declaring two variables of datatype 'integer' to store the number entered by the user 
    // and to store the calculated sum of digits of the number.
    int num, sum;
    
    // Prompting the user to enter his/her number.
    printf("Please enter your desired number: ");
    scanf("%d", &num);
    
    // Function Call
    sum = sum_of_digits(num);
    
    // Printing the Sum of Digits of the number.
    printf("The sum of the digits of %d is: %d", num, sum);
    
    return 0;
}

// Function Definition
int sum_of_digits(int num)
{
    // Recursion Terminator
    if(num == 0)
        return 0;
    // Recursion Generator
    else
        return(num % 10 + sum_of_digits(num / 10));
}

/*
Sample OUTPUT:

Please enter your desired number: 1234
The sum of the digits of 1234 is: 10

*/