#include<stdio.h>

int main()
{ int a=2,b=3,c;// a=2 but binary in=10,b=3 but binary in= 11 , so
	//bitwise operator is :-practical
	
	c=a&b;
	printf("\n a & b  is c:- %d\n",c);// a AND b is 1 0*1 1 =1 0=2 
	
	c=a|b;
	printf("\n a | b  is c:- %d\n",c);// a OR b is 1 0+1 1 =2 1=1 1 0 0 
	
	//now
	c=b<<a;
	printf("\n a << b is c:- %d\n",c);// b << a is leftshift (0)zero add
	/*011<<010 so 11 is true and ans. is 1100 binary ans:- 12*/
	
	c=b>>a;
	printf("\n a >> b is c:- %d\n",c);// b >> a is Rightshift (remove of digits) 
	/*11>>10 so 11 is hig. >> 10 is low so low in number 10 is not hig.
	 ans.:- is false(0) >*/
	
	//XOR :- conditions        1.set 1*1=0;
	/* ( ^ ) exclusive OR(XOR) 2.set 0*0=0;
	a=3   11 ^
	b=2   10 
	--------
	ans:- 01==1 */
	
	c=b^a;//b=3,a=2 , 3=11,2=10;
	printf("\n a  ^ b is c:- %d\n",c);
	
	// ( ~ ) bitwise inversion(one's complements):-
	/* suppose a=2 so condition c=~a so now
	consider is a=2 at binary is 2=10 at 
	converting in ~(inversion mode so 1's to 0,and 0's to 1  ) 
	so            a=2
	changes digit:-  1 0
	            c=~a=1 1 is ans. -3   
	following coding is	 */
	
	c=~a;
	printf("\n  ~a   is c:- %d\n",c); //all 6 operator completely
	//bitwise opertors:- &,|,<<,>>,^,~
	
}
