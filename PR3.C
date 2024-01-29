#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();
	float angle1, angle2, angle3;
	printf("Enter the first angle:");
	scanf("%f",&angle1);
	printf("Enter the seconf angle: ");
	scanf("%f",&angle2);
	angle3 = 180 - (angle1)+(angle2);
	printf("The third angle in : %2f degrees\n",angle3);
	getch();



}