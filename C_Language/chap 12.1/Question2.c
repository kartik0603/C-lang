/*
Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/



#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[30];
    int age;
    char role[20];
    char city[15];
    int experience;
    char company_name[25];
};

int main()
{
    int n, i;

    printf("Enter How many Employees are Working \t:");
    scanf("%d", &n);

    struct employee e[n];

    while ((getchar()) != '\n')
        ;

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter Id \t:", i + 1);
        scanf("%d", &e[i].id);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter Name\t:", i + 1);
        scanf("%s", e[i].name);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter Age\t:", i + 1);
        scanf("%d", &e[i].age);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter Role\t:", i + 1);
        scanf("%s", e[i].role);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter City\t:", i + 1);
        scanf("%s", e[i].city);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter Experience\t:", i + 1);
        scanf("%d", &e[i].experience);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Enter Company Name\t:", i + 1);
        scanf("%s", e[i].company_name);
    }

    printf("\n");
    printf("\n");

    printf(" Employee ID:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %d \n", i + 1, e[i].id);
    }

    printf("\n");
    printf(" Employees NAME:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %s \n", i + 1, e[i].name);
    }

    printf("\n");
    printf("Employees Age:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %d \n", i + 1, e[i].age);
    }

    printf("\n");
    printf("Employee Role:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %s \n", i + 1, e[i].role);
    }

    printf("\n");
    printf("Employee City:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %s \n", i + 1, e[i].city);
    }

    printf("\n");
    printf("Employee Experience:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %d\n", i + 1, e[i].experience);
    }

    printf("\n");
    printf("Employee's Company Name:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d) %s \n", i + 1, e[i].company_name);
    }

    return 0;
}
