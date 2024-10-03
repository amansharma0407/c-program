#include<stdio.h>
int main()
{
	int number;
	printf("enter the value of number");
	scanf("%d",&number);
	if(number>0)
	{
		printf("the number is positive");
	}
      	else if(number<0)
		{
			printf("the mumber is negative\n");
}
else{
	printf("the number is zero");
}
return 0;
	}

