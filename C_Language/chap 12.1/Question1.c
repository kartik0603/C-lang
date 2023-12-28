/*
Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include <stdio.h>
#include <string.h>

struct student1
{
    int id;
    char name[30];
    int age;
    char course[30];
    char city[10];
    int standarad;
    char school[30];
};

struct student2
{
    int id;
    char name[30];
    int age;
    char course[30];
    char city[10];
    int standarad;
    char school[30];
};

struct student3
{
    int id;
    char name[30];
    int age;
    char course[30];
    char city[10];
    int standarad;
    char school[30];
};

int main()
{
    printf("\n");

    struct student1 s1;
    

    s1.id = 101;
    strcpy(s1.name, "Kartik");
    s1.age = 20;
    strcpy(s1.course, "Full Stack");
    strcpy(s1.city, "Surat");
    s1.standarad = 12;
    strcpy(s1.school, "Shree Swaminarayan Gurukul");

    printf("Id\t:%d\n", s1.id);
    printf("NamE\t:%s\n", s1.name);
    printf("Age\t:%d\n", s1.age);
    printf("Course\t:%s\n", s1.course);
    printf("City\t:%s\n", s1.city);
    printf("Standard\t:%d\n", s1.standarad);
    printf("School\t:%s\n", s1.school);

    printf("\n");
    printf("\n");

    struct student1 s2;


    s2.id = 102;
    strcpy(s2.name, "Pavan");
    s2.age = 21;
    strcpy(s2.course, "Full Stack");
    strcpy(s2.city, "Surat");
    s2.standarad = 12;
    strcpy(s2.school, "Shree Swaminarayan Gurukul");

    printf("Id\t:%d\n", s2.id);
    printf("NamE\t:%s\n", s2.name);
    printf("Age\t:%d\n", s2.age);
    printf("Course\t:%s\n", s2.course);
    printf("City\t:%s\n", s2.city);
    printf("Standard\t:%d\n", s2.standarad);
    printf("School\t:%s\n", s2.school);


    printf("\n");
    printf("\n");

struct student1 s3;


    s3.id = 103;
    strcpy(s3.name, "Ritesh");
    s3.age = 21;
    strcpy(s3.course, "Flutetr");
    strcpy(s3.city, "Surat");
    s3.standarad = 12;
    strcpy(s3.school, "Shree Swaminarayan Gurukul");

    printf("Id\t:%d\n", s3.id);
    printf("NamE\t:%s\n", s3.name);
    printf("Age\t:%d\n", s3.age);
    printf("Course\t:%s\n", s3.course);
    printf("City\t:%s\n", s3.city);
    printf("Standard\t:%d\n", s3.standarad);
    printf("School\t:%s\n", s3.school);

}