/*
 Enter Number Of Names  :5

 Enter Students Names 1 :Rina
 Enter Students Names 2 :Krishna
 Enter Students Names 3 :Manoj
 Enter Students Names 4 :Purvi
 Enter Students Names 5 :Abha

Enter Number of Subjects        :5

 Enter Subjects Names 1 :Physics
 Enter Subjects Names 2 :Chemistry
 Enter Subjects Names 3 :Maths
 Enter Subjects Names 4 :English
 Enter Subjects Names 5 :Computer

Enter Marks for Rina in Physics : 89
Enter Marks for Rina in Chemistry       : 96
Enter Marks for Rina in Maths   : 79
Enter Marks for Rina in English : 86
Enter Marks for Rina in Computer        : 93
Enter Marks for Krishna in Physics      : 96
Enter Marks for Krishna in Chemistry    : 92
Enter Marks for Krishna in Maths        : 89
Enter Marks for Krishna in English      : 95
Enter Marks for Krishna in Computer     : 97
Enter Marks for Manoj in Physics        : 89
Enter Marks for Manoj in Chemistry      : 96
Enter Marks for Manoj in Maths  : 98
Enter Marks for Manoj in English        : 92
Enter Marks for Manoj in Computer       : 96
Enter Marks for Purvi in Physics        : 89
Enter Marks for Purvi in Chemistry      : 89
Enter Marks for Purvi in Maths  : 89
Enter Marks for Purvi in English        : 67
Enter Marks for Purvi in Computer       : 89
Enter Marks for Abha in Physics : 79
Enter Marks for Abha in Chemistry       : 89
Enter Marks for Abha in Maths   : 96
Enter Marks for Abha in English : 89
Enter Marks for Abha in Computer        : 89

Students Roll Number:
 Roll Number (1) : Abha
 Roll Number (2) : Krishna
 Roll Number (3) : Manoj
 Roll Number (4) : Purvi
 Roll Number (5) : Rina


Students Roll Number and Names with Subject in Marks:

 Roll Number (1) : Abha
   Marks in Physics = 89

   Marks in Chemistry = 96

   Marks in Maths = 79

   Marks in English = 86

   Marks in Computer = 93

 Roll Number (2) : Krishna
   Marks in Physics = 96

   Marks in Chemistry = 92

   Marks in Maths = 89

   Marks in English = 95

   Marks in Computer = 97

 Roll Number (3) : Manoj
   Marks in Physics = 89

   Marks in Chemistry = 96

   Marks in Maths = 98

   Marks in English = 92

   Marks in Computer = 96

 Roll Number (4) : Purvi
   Marks in Physics = 89

   Marks in Chemistry = 89

   Marks in Maths = 89

   Marks in English = 67

   Marks in Computer = 89

 Roll Number (5) : Rina
   Marks in Physics = 79

   Marks in Chemistry = 89

   Marks in Maths = 96

   Marks in English = 89

   Marks in Computer = 89



Roll Number (1) : Abha


Total Marks     :443
Percentage      :88 %

Roll Number (2) : Krishna


Total Marks     :469
Percentage      :93 %

Roll Number (3) : Manoj


Total Marks     :471
Percentage      :94 %

Roll Number (4) : Purvi


Total Marks     :423
Percentage      :84 %

Roll Number (5) : Rina


Total Marks     :442
Percentage      :88 %

*/

#include <stdio.h>
#include <string.h>

int main()
{

    // printf("\n==== Students Numbers====\n");

    int n1, i, n2, j;

    printf(" Enter Number Of Names\t:");
    scanf("%d", &n1);

    printf("\n");

    // printf("\n==== Students Names====\n");

    char names[n1][30], temp[30];

    for (i = 0; i < n1; i++)
    {
        printf(" Enter Students Names %d\t:", i + 1);
        scanf("%s", names[i]);
    }

    printf("\n");

    // printf("\n==== Subject Number====\n");

    printf("Enter Number of Subjects\t:");
    scanf("%d", &n2);

    printf("\n");

    // printf("\n==== Subjects Names====\n");

    char subjects[n2][30];

    for (i = 0; i < n2; i++)
    {
        printf(" Enter Subjects Names %d\t:", i + 1);
        scanf("%s", subjects[i]);
    }

    printf("\n");

    // printf("\n==== Subjects Marks ====\n");

    int marks[n1][n2];

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            do
            {
                printf("Enter Marks for %s in %s\t: ", names[i], subjects[j]);
                scanf("%d", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > 100)
                {
                    printf("Invalid input. Marks should be between 0 and 100. Please try again.\n");
                }
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
    }

    // Sorting names
    // students Roll Number

    for (i = 0; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output
    // students Roll Number and Names with Subject in marks

    printf("\nStudents Roll Number:\n");
    for (i = 0; i < n1; i++)
    {
        printf(" Roll Number (%d) : %s\n", i + 1, names[i]);
    }

    printf("\n");

    printf("\nStudents Roll Number and Names with Subject in Marks:\n");

    printf("\n");

    for (i = 0; i < n1; i++)
    {
        printf(" Roll Number (%d) : %s\n", i + 1, names[i]);
        for (j = 0; j < n2; j++)
        {
            printf("   Marks in %s = %d\n", subjects[j], marks[i][j]);
            printf("\n");
        }
    }

    printf("\n");

    // printf("===\n Stdents Total Marks And Percentage\n===")

    for (i = 0; i < n1; i++)
    {
        int total = 0;
        printf("\nRoll Number (%d) : %s\n", i + 1, names[i]);
        printf("\n");

        for (j = 0; j < n2; j++)
        {
            total += marks[i][j];
        }
        printf("\n");

        int percentage = (total * 100) / (n2 * 100);

        // Calculate percentage
        printf("Total Marks\t:%d\n", total);
        printf("Percentage\t:%d %%\n", percentage);
    }

    return 0;
}
