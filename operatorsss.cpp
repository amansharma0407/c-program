#include<stdio.h>
int main ()
{
	int a,b,c;
    char ch;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("enter the operators(+,-,*,/)");
    scanf(" %c",&ch);
    switch(ch)
	{
		case'+':
			c=a+b;
			printf("a+b is %d",c);
			break;
		case'-':
			c=a-b;
			printf("a-b is %d",c);
			break;
		case'*':
			c=a*b;
			printf("a*b is %d",c);
			break;
		case'/':
			c=a/b;
			printf("a/b is %d",c);
			break;
	default:
		printf("invalid operators");
		
    	
	}
	return 0;
}
