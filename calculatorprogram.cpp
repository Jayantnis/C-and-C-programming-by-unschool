#include<stdio.h>
//calculator program  by jayant nishad unschool.in with assingments
int main()
{ int a,b,c,n;
  printf("\n\n~~~~~~~~-:-Enter two number from calculator program-:-~~~~~~~~~~~~\n\n");
	
	
	printf("\n1.first  number  a is :- \a");
	scanf("%d",&a);
	printf("\n2.second number b is :- \a");
    scanf("%d",&b);
	
	printf("\n========conditions========\n");
		printf("\n1. a  + b    \n");
		printf("\n2. a  - b    \n");
		printf("\n3. a  * b    \n");
		printf("\n4. a  / b    \n");
		printf("\n5. a modules(%) b    \n");// % -modules operator
		
		printf("\n=====Enter conditions choses::- ======\n");
		scanf("%d\a\n\a",&n);
	
	switch(n)//switch case applied
	{ 
		case 1:
			c=a+b;
			printf("\n1.Sum(+) of number a=%d + b=%d :- %d\n\a",a,b,c);			
		break;
		
		case 2:
			c=a-b;
			printf("\n2.Difference(-) of number a=%d - b=%d :- %d\n\a",a,b,c);
		break;
		
		case 3:
			c=a*b;
			printf("\n3.Multifictions(*) of number a=%d * b=%d c:- %d\n\a",a,b,c);
		break;
		
		case 4:
			c=a/b;
			printf("\n4.Dividing(/) of number a=%d / b=%d  c:- %d\n\a",a,b,c);
		break;
		
		case 5:
			c=a%b;
			printf("\n5.modulusopertor(%) of number a=%d % b=%d c:- %d\n\a",a,b,c);
			break;
		
		default :
				printf("\n===== Wrong  Number Enter====\n");
		}
	
return 0;
}






