#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("Enter Value of a: ");
	scanf("%d",&b);
	printf("Enter Value of b: ");
	scanf("%d",&b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf("After Swaping:\n");
	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	getch();
}