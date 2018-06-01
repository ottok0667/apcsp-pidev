#include <stdio.h>
#include <string.h>
#include "student.h"



struct Student {
  char fName[50];
  char lName[50];
  int age;
  int id;
};

void enterStudent (struct Student* student)
{
  char first[50], last [50];
  char studentAge[50], studentId[50];
  int yearsOld;
  int studentNumber;

  while (1)
  {
    printf("Enter a first name ");
    fgets(first, 50, stdin);
    if (sscanf(first, "%s", student->fName) == 1) break;
      printf("Not an appropriate first name - try again!\n");
  }

  while(1)
  {
    printf("Enter a last name ");
    fgets(last, 50, stdin);
    if (sscanf(last, "%s", student->lName) == 1) break;
      printf("Not an appropriate last name - try again!\n");
  }

  while (1)
  {
    printf("Enter the student's age ");
    fgets(studentAge, 50, stdin);
    if (sscanf(studentAge, "%d", &yearsOld) == 1) break;
      printf("Not an appropriate age - try again!\n");
  }
  student->age = yearsOld;

  while (1)
  {
    printf("Enter the student's id number ");
    fgets(studentId, 50, stdin);
    if (sscanf(studentId, "%d", &studentNumber) == 1) break;
      printf("Not an appropriate id number - try again!\n");
  }
  student->id = studentNumber;
}

void printStudent (struct Student* student)
{
  printf("Student First Name: %s\nStudent Last Name: %s\nStudent Age: %d\nStudent ID Number: %d\n", student->fName, student->lName, student->age, student->id);
}

void studentMain()
{
  char cont[50];

  int i = 0;
  int n = 0;

  struct Student myStudent[25];
  do {
    enterStudent(&myStudent[i]);
    i++;
    printf("Do you wish to add another student (y/n)? ");

    fgets(cont, 50, stdin);
  } while (i < 25 && (cont[0] == 'y'));

  printf("\n");

  for (n = 0; n < i; n++)
    printStudent(&myStudent[n]);
}
