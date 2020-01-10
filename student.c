#include <stdio.h>

struct Student {

	char firstname[100];
	char lastname[100];
	int age;
	int id;
} student;

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

int main()
{
	char answer;
  int counter;
	printf("Enter a student?(y/n) ");
	scanf("%c", &answer);
	counter = 0;
	student students[100];

	while (answer == 'y')
	{
		enterstud(&students[counter]);
    counter++;
    printf("Enter a student?(y/n) ");
	  scanf(" %c", &answer);
	}

  for (int i = 0; i < counter; i++)
  {
    printstud(&students[i]);
  }
}
