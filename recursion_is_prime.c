// Finding if the number is a prime number or not using "Recursion".

// Including header file "Standard Input/Output" and "Standard Boolean" using a Preprocessor Directive.
#include <stdio.h>
#include <stdbool.h>

// Function Prototype
bool is_prime(int, int);

// main() function.
int main()
{
    // Declaring two variables of datatype 'integer' and 'boolean' to store the number entered by the user 
    // and to store true of false based on the computation of the function.
    int num;
    bool sol;
    
    // Prompting the user to enter his/her number.
    printf("Please enter your desired number: ");
    scanf("%d", &num);
    
    // Function Call
    sol = is_prime(num, 2);
    
    // Printing whether the number is prime or not using if-else condition.
    if(sol)
        printf("Yes, the number is a prime number.");
    else
        printf("No, the number is not a prime number.");
    
    return 0;
}

// Function Definition
bool is_prime(int num, int i)
{
    // Recursion Terminator
    // Check if the number is less than or equal to two.
    if(num <= 2)
        // Return 'true' if the number is 2, else return 'false'.
        return (num == 2? true : false);
        
    // Check if the number is divisible by the divisor.
    if(num % i == 0)
        return false;
    
    // Check if the divisor exceeds the root of the number.
    if(i*i > num)
        return true;
        
    // Recursion Generator
    // Check next divisor.
    is_prime(num, i + 1);
}

/*
Sample OUTPUT:

Please enter your desired number: 456
No, the number is not a prime number.

Please enter your desired number: -1
No, the number is not a prime number.

Please enter your desired number: 2
Yes, the number is a prime number.

*/