#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();
	float basicSalary,hraPercentage,daPercentage,taPercentage,grossSalary;
	printf("Enter Hra percentage: ");
	scanf("%f",&basicSalary);

	printf("Enter Da Percentage:  ");
	scanf("%f",&hraPercentage);

	printf("Enter Ta Percentage:  ");
	scanf("%f",&taPercentage);

	float hra =(hraPercentage / 100)*basicSalary;
	float da =(daPercentage/100)*basicSalary;
	float ta =(taPercentage/100)*basicSalary;

	grossSalary=basicSalary + hra + da +ta;

	printf("Basic Salary: %.2f\n",basicSalary);
	printf("Hra: %.2f\n",hra);
	printf("Da: %.2f\n",da);
	printf("Ta: %.2f\n",ta);
	printf("Gross Salary: %.2f\n",grossSalary);
	getch();
	return 0;
}

