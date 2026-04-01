#include<stdio.h>
int power(int a, int n)
{
	if(n==0)
		return 1;
	else
		if(n==1)
			return a;
		else
			return a * power(a, n-1); 
	
} 
main()
{
	int a, n, pw;
	scanf("%d%d", &a, &n);
	pw = power(a, n);
	printf("%d", pw); 
 } 
