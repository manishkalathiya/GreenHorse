#include<stdio.h>
#include<conio.h>

main()
{
	float celsius, fahrenheit;

	clrscr();
	printf("Enter Temperature in celsius: ");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5) + 32;
	printf("%.2f celsius is equal to %f Fahrenheit\n", celsius, fahrenheit);
	getch();
}