#include<stdio.h>
/*write a program to find sum of three number user will enter multiple values using single
 statement only ?
 
 assignment by jayant nishad in unschool.in */
 
int main()
{ int a,b,c;
	int sum;
	printf("\n find sum of three number a,b,c\a\a\n\n");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\noutput should be like:- sum of =%d+%d+%d\n",a,b,c);
  sum=a+b+c;
  printf("\n\a\afinaly ans. is :- %d\n",sum);
  return 0;
}
