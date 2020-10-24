#include<stdio.h>
int main()
{
	int first=0,second=1,temp;
	printf("%d,%d",first,second);
	while(second<=1000)
	{
		temp=second;
		second=second+first;
		first=temp;
		printf(",%d",second);
	}
	return 0;
}
