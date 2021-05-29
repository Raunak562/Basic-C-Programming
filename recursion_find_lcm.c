// Finding the LCM of two numbers using "Recursion".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// Function Prototype
int find_lcm(int, int);

// main() function.
int main()
{
    // Declaring three variables of datatype 'integer' to store the numbers entered by the user
    // and to store the LCM of these two numbers.
    int num1, num2, lcm;
    
    // Prompting the user to enter his/her number.
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    
    // Function Call
    lcm = find_lcm(num1, num2);
    
    // Printing the LCM of the two numbers.
    printf("The L.C.M. of %d & %d is: %d", num1, num2, lcm);
    
    return 0;
}

// Function Definition
int find_lcm(int num1, int num2)
{
    // Static Variable
    static int lcm = 1;
    
    // Recursion Terminator
    if(lcm % num1 == 0 && lcm % num2 == 0)
        return lcm;
    else
        lcm++;
    
    // Recursion Generator
    find_lcm(num1, num2);
}

/*
Sample OUTPUT:

Please enter the first number: 12
Please enter the second number: 5
The L.C.M. of 12 & 5 is: 60

Please enter the first number: 12
Please enter the second number: 30
The L.C.M. of 12 & 30 is: 60

Please enter the first number: 74
Please enter the second number: 24
The L.C.M. of 74 & 24 is: 888

*/