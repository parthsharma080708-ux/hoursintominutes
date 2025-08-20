#include<stdio.h>         //header file
#include<conio.h>
void main()               //function
{	/*Program to convert hours into minutes.*/
	int a,b;
	clrscr();
	printf(" Enter the number of hours ");
	scanf("%d",&a);        //input
	b=a*60;
	printf(" %dhours = %dminutes\n", a,b);
	getch();

}
