// Decision making using "if-else-if ladder".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// main() function.
int main()
{
    // Declaring a variable of datatype 'integer' to store the marks entered by the user.
    int marks;
    
    // Prompting the user to enter the values.
    do
    {
        printf("Please enter your marks for grading: ");
        scanf("%d", &marks);
        if(marks > 100 || marks < 0)
            printf("Invalid marks entered!\n(One cannot earn more than 100 marks as well as less than 0 marks)\n\n");
    }while(marks > 100 || marks < 0);
    
    // Decision making using "Ternary Operator".
    //printf( "%s", marks > 90 ? "Grade A" : ( marks > 80 ? "Grade B" : ( marks > 60 ? "Grade C" : ( marks > 40 ? "Grade D" : "Grade F" ))));
    
    // Decision making using "if-else-if ladder".
    printf("Congratulations! You earned: ");
    if(marks > 90)
        printf("Grade A");
    else if(marks > 80)
        printf("Grade B");
    else if(marks > 60)
        printf("Grade C");
    else if(marks > 40)
        printf("Grade D");
    else
        printf("Grade F");
    
    return 0;
}

/*
Sample OUTPUT:

Please enter your marks for grading: 101
Invalid marks entered!
(One cannot earn more than 100 marks as well as less than 0 marks)

Please enter your marks for grading: -1
Invalid marks entered!
(One cannot earn more than 100 marks as well as less than 0 marks)

Please enter your marks for grading: 67
Congratulations! You earned: Grade C

*/