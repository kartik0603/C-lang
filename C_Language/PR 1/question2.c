// Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include <stdio.h>
int main()
{
    float baseSalary, HRA, DA, TA;
    float grossSalary;

    printf(" Enter Basic Salary of Employe \t:");
    scanf("%f", &baseSalary);

    printf("Enter HRA \t:");
    scanf("%f", &HRA);

    printf(" Enter DA \t:");
    scanf("%f", &DA);

    printf(" Enter TA \t:");
    scanf("%f", &TA);

    float hra = (HRA / 100) * baseSalary;
    float da = (DA / 100) * baseSalary;
    float ta = (TA / 100) * baseSalary;

    grossSalary = baseSalary + hra + da + ta;

    printf(" Gross Salary of Employe is \t: %.2f", grossSalary);
    return 0;
}