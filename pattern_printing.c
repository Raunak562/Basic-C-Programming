// Pattern-printing using "Nested for-loop Statements".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// main() function.
int main()
{
    // Declaring a variable of datatype 'integer' to store the choice entered by the user.
    int choice;
    
    // Prompting the user to enter his/her choice.
    printf("Please enter your desired number of stairs in the pattern: ");
    scanf("%d", &choice);
    
    // Pattern-printing using nested for-loop statements.
    
    //Type 1: Bottom-Left Pyramid
    printf("\nBottom-Left Pyramid\n\n");
    for(int i = 0; i < choice; i++)
    {
        for(int j = 0; j <= i; j++)
            printf("01");
        printf("\n");
    }
    
    //Type 2: Top-Left Pyramid
    printf("\nTop-Left Pyramid\n\n");
    for(int i = choice; i > 0; i--)
    {
        for(int j = i; j > 0; j--)
            printf("01");
        printf("\n");
    }
    
    //Type 3: Bottom-Right Pyramid
    printf("\nBottom-Right Pyramid\n\n");
    for(int i = 0; i < choice; i++)
    {
        for(int j = choice ; j > 0; j--)
        {
            if(j-1 > i )
                printf("  ");
            else
                printf("01");
        }
        printf("\n");
    }
    
    //Type 4: Top-Right Pyramid
    printf("\nTop-Right Pyramid\n\n");
    for(int i = 0; i < choice; i++)
    {
        for(int j = 0; j < choice; j++)
        {
            if(j < i)
                printf("  ");
            else
                printf("01");
        }
        printf("\n");
    }
    
    //Type 5: Central Pyramid
    printf("\nCentral Pyramid\n\n");
    for(int i = 0; i < choice; i++)
    {
        for(int j = choice - 1; j > i; j--)
            printf(" ");
        for(int j = 0; j <= i; j++)
            printf("01");
        printf("\n");
    }
    
    return 0;
}

/*
Sample OUTPUT:

Please enter your desired number of stairs in the pattern: 6

Bottom-Left Pyramid

01
0101
010101
01010101
0101010101
010101010101

Top-Left Pyramid

010101010101
0101010101
01010101
010101
0101
01

Bottom-Right Pyramid

          01
        0101
      010101
    01010101
  0101010101
010101010101

Top-Right Pyramid

010101010101
  0101010101
    01010101
      010101
        0101
          01

Central Pyramid

     01
    0101
   010101
  01010101
 0101010101
010101010101

*/