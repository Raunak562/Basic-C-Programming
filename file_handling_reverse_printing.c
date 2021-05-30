// Program to take input from one file and print the reverse in another file to understand "File Handling".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>

// main() function.
int main ()
{
    // Declaring two pointers of structure 'FILE' to access two different files.
    FILE *fp1, *fp2;
    
    // Opening 'Inputfile.txt' in read mode.
    fp1 = fopen("Inputfile.txt", "r");
    // Opening 'Outputfile.txt' in write mode.
    fp2 = fopen("Outputfile.txt", "w");
    
    // Declaring a variable of datatype 'integer' to store the count of character in 'Inputfile.txt' file.
    int count = 0;
    // Declaring a variable of datatype 'character' to temporarily store the characters from the 'Inputfile.txt' file.
    char ch = '\0';
    
    printf("Input from \"Inputfile.txt\": ");
    fprintf(fp2,"Input from \"Inputfile.txt\": ");
    
    // While-loop to access the characters in 'Inputfile.txt' file 
    // and print them in console as well as in 'Outputfile.txt' file.
    while(1)
    {
        ch = fgetc(fp1);
        if(ch == EOF)
            break;
        printf("%c", ch);
        fprintf(fp2,"%c", ch);
        count++;
    }
    
    printf("\nThe reversed string will be: ");
    fprintf(fp2,"\nThe reversed string will be: ");
    
    // For-loop to access the characters in 'Inputfile.txt' file in reverse order
    // and print them in console as well as in 'Outputfile.txt' file.
    for( ; count > -1; count--)
    {
        fseek(fp1,count,SEEK_SET);
        ch = fgetc(fp1);
        if(ch != EOF)
        {
            printf("%c", ch);
            fprintf(fp2,"%c", ch);
        }
    }
    
    // Closing both the files.
    fclose (fp1);
    fclose (fp2);
    
    return 0;
}

/*
Sample OUTPUT:

Input from "Inputfile.txt": MyCaptain
The reversed string will be: niatpaCyM

*/