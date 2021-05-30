// Program to understand the working of "Array of Structures".

// Including header file "Standard Input/Output" using a Preprocessor Directive.
#include <stdio.h>
// #include <stdlib.h>

// Structure Definition
struct employee
{
    int empno;
    char empname[25];
    int age;
    char gender;
    char dept[10];
    int salary;
    long phno;
};

// Function Prototype
// void getEmployeeDetails(struct employee); // To read the Employee Details.
void putEmployeeDetails(struct employee); // To display the Employee Details.

// main() function.
int main()
{
    // Declaring two variables of datatype 'integer' to store the no of employees
    // and to be used as an iterator by for-loop respectively.
    int n, i;
    
    // Prompting the user to enter the number of employees.
    printf("Enter the number of employees whose details are need to be recorded: ");
    scanf("%d", &n);
    
    // Declaring an 'array of structures' to store the details of 'n' different employees.
    struct employee emp[n];
    
    // Prompting the user to enter all the details of the employees one by one.
    printf("\nPlease enter all the details of the employees one by one-\n");
    
    // For-loop to read the Employee Details for 'n' times.
    for(i = 0; i < n; i++)
    {
        printf("\nDetails of Employee %d~\n", i + 1);
        
        printf("EmpID of the Employee: ");
        scanf("%d", &emp[i].empno);
        printf("Name of the Employee: ");
        scanf("%s", emp[i].empname);
        printf("Age of the Employee: ");
        scanf("%d", &emp[i].age);
        printf("Gender of the Employee(M/F): ");
        scanf("%c", &emp[i].gender);
        scanf("%c", &emp[i].gender);
        printf("Department of the Employee: ");
        scanf("%s", emp[i].dept);
        printf("Salary earned by the Employee: ");
        scanf("%d", &emp[i].salary);
        printf("Phone No. of the Employee: ");
        scanf("%ld", &emp[i].phno);
        
        // Function Call
        // getEmployeeDetails(emp[i]); // To read the Employee Details.
    }
    
    // Printing the details of all the employees working here one by one.
    printf("\nThe details of all the employees working here one by one-\n");
    
    // For-loop to display the Employee Details for 'n' times.
    for(i = 0; i < n; i++)
    {
        printf("\nDetails of Employee %d~", i + 1);
        
        // Function Call
        putEmployeeDetails(emp[i]); // To display the Employee Details.
    }
    
    return 0;
}

// Function Definition

// To read the Employee Details.
// void getEmployeeDetails(struct employee emp)
// {

// }

// To display the Employee Details.
void putEmployeeDetails(struct employee emp)
{
    printf("\nEmpID of the Employee: ");
    printf("%d", emp.empno);
    printf("\nName of the Employee: ");
    printf("%s", emp.empname);
    printf("\nAge of the Employee: ");
    printf("%d", emp.age);
    printf("\nGender of the Employee(M/F): ");
    printf("%c", emp.gender);
    printf("\nDepartment of the Employee: ");
    printf("%s", emp.dept);
    printf("\nSalary earned by the Employee: ");
    printf("%d", emp.salary);
    printf("\nPhone No. of the Employee: ");
    printf("%ld\n", emp.phno);
}
/*
Sample OUTPUT:

Enter the number of employees whose details are need to be recorded: 2

Please enter all the details of the employees one by one-

Details of Employee 1~
EmpID of the Employee: 101
Name of the Employee: Empone
Age of the Employee: 23
Gender of the Employee(M/F): M
Department of the Employee: Sales
Salary earned by the Employee: 1000000
Phone No. of the Employee: 9876543210

Details of Employee 2~
EmpID of the Employee: 102
Name of the Employee: emptwo
Age of the Employee: 26
Gender of the Employee(M/F): F
Department of the Employee: Marketing
Salary earned by the Employee: 1200000
Phone No. of the Employee: 9678459876

The details of all the employees working here one by one-

Details of Employee 1~
EmpID of the Employee: 101
Name of the Employee: Empone
Age of the Employee: 23
Gender of the Employee(M/F): M
Department of the Employee: Sales
Salary earned by the Employee: 1000000
Phone No. of the Employee: 9876543210

Details of Employee 2~
EmpID of the Employee: 102
Name of the Employee: emptwo
Age of the Employee: 26
Gender of the Employee(M/F): F
Department of the Employee: Marketing
Salary earned by the Employee: 1200000
Phone No. of the Employee: 9678459876

*/