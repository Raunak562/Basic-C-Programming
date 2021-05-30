// Program to initialize a 3x3 2D array and manipulate data using "Pointers".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// Function Prototype
void get_2D_array(int (*)[3][3]); // To get the elements of the 3x3 2D array.
void put_2D_array(int (*)[3][3]); // To print the elements of the 3x3 2D array.
void sum_of_left_diagonal(int (*)[3][3]); // To calculate & print the sum of all the left diagonal elements of the 3x3 2D array.
void sum_of_right_diagonal(int (*)[3][3]); // To calculate & print the sum of all the right diagonal elements of the 3x3 2D array.
void sum_of_all_diagonal(int (*)[3][3]); // To calculate & print the sum of all the diagonal elements of the 3x3 2D array.

// main() function.
int main()
{
    // Declaring a 3x3 2D array of datatype 'integer' to store the elements of a matrix entered by the user.
    int arr[3][3];
    
    // Declaring & initializing a pointer of datatype 'integer' to point our 3x3 2D array.
    int (*ptr)[3][3] = &arr;
    
    // // Declaring two variables of datatype 'integer' to be used as an iterator by for-loop.
    // i, j;
    
    // // Prompting the user to enter all the number of the 3x3 2D array.
    // printf("Please enter all the elements of the matrix~\n");
    // for(i = 0; i < 3; i++)
    //     for(j = 0; j < 3; j++)
    //     {
    //         printf("Please enter the element at [%d][%d]: ", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    
    // // Displaying the 3x3 2D array.
    // printf("The matrix is:\n");
    // for(i = 0; i < 3; i++)
    // {
    //     for(j = 0; j < 3; j++)
    //         printf("%d\t", arr[i][j]);
    //     printf("\n");
    // }
    
    // Function Call
    get_2D_array(ptr); // To get the elements of the 3x3 2D array.
    put_2D_array(ptr); // To print the elements of the 3x3 2D array.
    sum_of_left_diagonal(ptr); // To calculate & print the sum of all the left diagonal elements of the 3x3 2D array.
    sum_of_right_diagonal(ptr); // To calculate & print the sum of all the right diagonal elements of the 3x3 2D array.
    sum_of_all_diagonal(ptr); // To calculate & print the sum of all the diagonal elements of the 3x3 2D array.
    
    return 0;
}

// Function Definition

// To get the elements of the 3x3 2D array.
void get_2D_array(int (*p)[3][3])
{
    printf("Please enter all the elements of the matrix~\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            printf("Please enter the element at [%d][%d]: ", i, j);
            scanf("%d", *(*(p + i) + j));
        }
}

// To print the elements of the 3x3 2D array.
void put_2D_array(int  (*p)[3][3])
{
    printf("\nThe matrix is:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%d\t", *(*(*(p + i) + j)));
        printf("\n");
    }
}

// To calculate & print the sum of all the left diagonal elements of the 3x3 2D array.
void sum_of_left_diagonal(int (*p)[3][3])
{
    int sum = 0;
    
    //Method 1
    // for(int i = 0; i < 3; i++)
    //     for(int j = 0; j < 3; j++)
    //         if(i == j)
    //             sum += **(*(p + i) + j);
    
    //Method 2
    for(int i = 0; i < 3; i++)
        sum += **(*(p + i) + i);
    printf("\nThe sum of left diagonal is: %d", sum);
}

// To calculate & print the sum of all the right diagonal elements of the 3x3 2D array.
void sum_of_right_diagonal(int (*p)[3][3])
{
    int sum = 0;
    
    // Method 1
    // for(int i = 0; i < 3; i++)
    //     for(int j = 0; j < 3; j++)
    //         if(i + j == 2)
    //             sum += **(*(p + i) + j);
    
    //Method 2
    for(int i = 0; i < 3; i++)
        sum += **(*(p + i) + (3 - i - 1));
    printf("\nThe sum of right diagonal is: %d", sum);
}

// To calculate & print the sum of all the diagonal elements of the 3x3 2D array.
void sum_of_all_diagonal(int (*p)[3][3])
{
    int sum = 0;
    
    // Method 1
    // for(int i = 0; i < 3; i++)
    //     for(int j = 0; j < 3; j++)
    //         if((i == j) || (i + j == 2))
    //             sum += **(*(p + i) + j);
    
    // Method 2
    for(int i = 0; i < 3; i++)
    {
        sum += **(*(p + i) + i);
        if(i != (3 - i - 1))
            sum += **(*(p + i) + (3 - i - 1));
    }
    printf("\nThe sum of all diagonal is: %d", sum);
    printf("\nThe sum of all diagonal is: %d", sum);
}

/*
Sample OUTPUT:

Please enter all the elements of the matrix~
Please enter the element at [0][0]: 1
Please enter the element at [0][1]: 2
Please enter the element at [0][2]: 3
Please enter the element at [1][0]: 4
Please enter the element at [1][1]: 5
Please enter the element at [1][2]: 6
Please enter the element at [2][0]: 7
Please enter the element at [2][1]: 8
Please enter the element at [2][2]: 9

The matrix is:
1	2	3	
4	5	6	
7	8	9	

The sum of left diagonal is: 15
The sum of right diagonal is: 15
The sum of all diagonal is: 25

*/