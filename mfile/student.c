#include <stdio.h>

#include <student.h>


void printstud(student* stud)
{
	printf("Name: %s %s\n", stud->firstname, stud->lastname);
	printf("Age: %d\n", stud->age);
	printf("id: %d\n", stud->id);
}

void enterstud(student* stu)
{
	printf("Enter the first name: ");
  scanf("%s", stu->firstname);

	printf("Enter the last name: ");
  scanf("%s", stu->lastname);

	printf("Enter the age: ");
  scanf("%d", &(stu->age));

	printf("Enter the student id: ");
  scanf("%d", &(stu->id));
}

