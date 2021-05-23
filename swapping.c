// Swapping of Two Numbers without using a "Temporary Variable".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// main() function.
int main()
{
    // Declaring the two variables of datatype 'integer' to store the value.
    int variableOne, variableTwo;
    
    // Prompting the user to enter the values.
    printf("Hey Viewer. Today, let me demonstrate you how to");
    printf(" \"Swap the value of two variables without using a third temporary variable\".\n");
    do
    {
        printf("Enter the 1st Value: ");
        scanf("%d", &variableOne);
        printf("Enter the 2nd Value: ");
        scanf("%d", &variableTwo);
        if(variableOne == variableTwo)
            printf("\nSorry Buddy! Both the values entered are same. Don't be a funkiller! Try entering two different values.\n");
    }while(variableOne == variableTwo);
    
    
    // An attractive separator.
    printf("\n");
    char load[] = "Loading...";
    for(int i = 0; i < 100; i++)
    {
        printf("█");
        if(i == 49)
            for(int j = 0; load[j] != '\0'; j++)
                printf("%c",load[j]);
    }
    printf("\n");
    
    // The actual 'Process'.
    printf("\nHow let us witness how it works!\n");
    printf("Initial value of variable one: %d\n",variableOne);
    printf("Initial value of variable two: %d\n",variableTwo);
    
    // The logic.
    printf("\nThe Logic\n");
    
    // The sum of both the variables is first assigned to the 1st variable.
    printf("variableOne = variableOne + variableTwo\n");
    variableOne = variableOne + variableTwo;
    
    // The difference of both the variables is now assigned to the 2nd variable.
    printf("variableTwo = variableOne - variableTwo\n");
    variableTwo = variableOne - variableTwo;
    
    // The difference of both the variables is finally assigned to the 1st variable.
    printf("variableOne = variableOne - variableTwo\n");
    variableOne = variableOne - variableTwo;
    
    // Final Output.
    printf("\nTada! Now the values have been swapped!\n");
    printf("Final value of variable one: %d\n",variableOne);
    printf("Final value of variable two: %d\n",variableTwo);
    
    return 0;
}

/*
Sample OUTPUT:

Hey Viewer. Today, let me demonstrate you how to "Swap the value of two variables without using a third temporary variable".
Enter the 1st Value: 15
Enter the 2nd Value: 15

Sorry Buddy! Both the values entered are same. Don't be a funkiller! Try entering two different values.
Enter the 1st Value: 15
Enter the 2nd Value: 51

██████████████████████████████████████████████████Loading...██████████████████████████████████████████████████

How let us witness how it works!
Initial value of variable one: 15
Initial value of variable two: 51

The Logic
variableOne = variableOne + variableTwo
variableTwo = variableOne - variableTwo
variableOne = variableOne - variableTwo

Tada! Now the values have been swapped!
Final value of variable one: 51
Final value of variable two: 15

*/