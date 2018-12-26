#include<stdio.h> 
#include<iostream> 


void task1()
{


	int a, b, n, i = 0;


	printf("write a: ");
	scanf_s("%d", &a);

	printf("write b: ");
	scanf_s("%d", &b);

	if (a < b)
	{
		for (n = a + 1; n < b; n++)
		{
			i++;
			printf("%d\n", n);
		}
		printf("The amount of numbers is %d\n", i);
	}

	else { printf("Your number is invalid\n"); }
	system("pause");
}



void task4()
{
	int n, i;


	printf("write n > 10: ");
	scanf_s("%d", &n);

	if (n > 10)
	{
		for (i = 10; i < n; i++)
		{
			if ((i % 2 != 0) && (i % 5) == 0)
			{
				printf("The number %d is odd number multiple of 5\n", i);
			}
		}
	}

	else { printf("Your number is invalid\n"); }

	system("pause");
}


void task5()
{

	int i, sqr;


	for (i = 11; i <= 99; i++)
	{
		sqr = i * i;
		printf("The square of %d is %d\n", i, sqr);
	}


	system("pause");
}



int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("¬ведите номер задани€: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();


	}break;

	case 4:
	{
		task4();
	}break;
	case 5:
	{
		task5();
	}break;
	}

	printf("’отите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}