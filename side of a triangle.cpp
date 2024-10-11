#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter the values ");
	scanf("%d %d %d",&s1,s2,s3);
	int t=(s1==s2)+(s2==s3)+(s3==s1);
	switch(t)
	{
		case1:
			printf("the triangle is equilateral");
			break;
		case2:
			printf("the triangle is isosceles");
				break;
		case3:
			printf("the triangle is scalene");
			break;
	
	}
	return 0;
}
