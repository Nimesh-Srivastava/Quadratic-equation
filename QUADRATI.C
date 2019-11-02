#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int a,b,c;
	float r1,r2,D,check;
	clrscr();
	printf("\n\tEnter the coefficients and constant terms");
	printf("\n\taccording to the given format :-");
	printf("\n\n\t\ta(x^2) + b(x) + c = 0");
	printf("\n\n\tEnter value of 'a' : ");
	scanf("%d",&a);
	printf("\n\n\tEnter value of 'b' : ");
	scanf("%d",&b);
	printf("\n\n\tEnter value of 'c' : ");
	scanf("%d",&c);
	printf("\n\n\tYour equation :-");
	printf("\n\n\t\t%d(x^2) + %d(x) + %d = 0",a,b,c);
	printf("\n\n\tPress any key to continue");
	getch();
	clrscr();
	printf("\n\n\tYour equation :-");
	printf("\n\n\t\t%d(x^2) + %d(x) + %d = 0",a,b,c);
	check=(b*b)-4*a*c;
	if(check<0)
	{
		printf("\n\n\tReal roots of the equation do not");
		printf("\n\n\texist");
		getch();
		exit(0);
	}
	else if(check==0)
	{
		D = sqrt(check);
		r1 = (D-b)/(2*a);
		r2 = r1;
		printf("\n\n\tRoots of this equation are real and equal");
		printf("\n\n\tRoot 1 = Root 2 = %f",r1);
		getch();
		exit(0);
	}
	else
	{
		D = sqrt(check);
		r1 = (D-b)/(2*a);
		r2 = (-1)*(D+b)/(2*a);
		printf("\n\n\tRoots of this equation are real and different");
		printf("\n\n\tRoot 1 = %f, Root 2 = %f",r1,r2);
	}
	getch();
}