// Decision making using "Switch Statements".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// main() function.
int main()
{
    // Declaring a variable of datatype 'integer' to store the choice entered by the user.
    int choice;
    
    // Prompting the user to enter his/her choice.
    for(int i = 0; i <= 50; i++)
    {
        printf("█");
        if(i == 24)
            printf("  Welcome to Yummy Fast Food Drive-Thru!  ");
    }
    printf("\n\nOur exclusive \'Menu of the Day\'");
    printf("\n1.Pizza, Rs 239");
    printf("\n2.Burger, Rs 129");
    printf("\n3.Pasta, Rs 179");
    printf("\n4.French Fries, Rs 99");
    printf("\n5.Sandwich, Rs 149");
    printf("\n\nPlease enter your desired choice from our menu: ");
    scanf("%d", &choice);
    
    // Decision making using Switch Statements.
    switch(choice)
    {
        case 1: // Choice 1
            printf("\nFood Item: Pizza\nPrice: Rs 239");
            break;
        case 2: // Choice 2
            printf("\nFood Item: Burger\nPrice: Rs 129");
            break;
        case 3: // Choice 3
            printf("\nFood Item: Pasta\nPrice: Rs 179");
            break;
        case 4: // Choice 4
            printf("\nFood Item: French Fries\nPrice: Rs 99");
            break;
        case 5: // Choice 5
            printf("\nFood Item: Sandwich\nPrice: Rs 149");
            break;
        default: // Invalid Choice
            printf("\nInvalid Choice Buddy! Please try again!\nThank You.");
    }
    return 0;
    
}

/*
Sample OUTPUT:

█████████████████████████  Welcome to Yummy Fast Food Drive-Thru!  ██████████████████████████

Our exclusive 'Menu of the Day'
1.Pizza, Rs 239
2.Burger, Rs 129
3.Pasta, Rs 179
4.French Fries, Rs 99
5.Sandwich, Rs 149

Please enter your desired choice from our menu: 3

Food Item: Pasta
Price: Rs 179

*/