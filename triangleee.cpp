#include<stdio.h>
int main ()
{
	int s1,s2,s3;
	printf("enter the value of 3 sides of triangles");
	scanf("%d%d%d",&s1,s2,s3);
	if((s1+s2>s3)&&(s1+s3>s2)&&(s2+s3>s1))
{
	if(s51==s2&&s2==s3)
{
	printf("the triangle is equilateral");
}}
else if (s1==s2||s2==s3||s1==s3)
{
	printf("the triangle is isosceles");
}
else 
{
		printf("the triangle is scalene");
}
printf("the given side do not from a valid triangle");
return 0;
}
