#include<stdio.h>
int add()
{
	int x,y,z;
	printf("\nEnter two numbers");
	scanf("%d%d",&x,&y);

	z=x+y;
	return(z);
	
}
int add(void);
void main()
{
	int s;
	s=add();
	printf("Sum of two number is %d",s);
	getch();
}

