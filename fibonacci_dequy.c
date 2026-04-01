#include<stdio.h>
int FIBONACCI(int n)
{
	if(n==0)
		return 0;
	else
		if(n==1)
			return 1;
		else
			return FIBONACCI(n-1) + FIBONACCI(n-2);
}
main()
{
	int n, fibo;
	printf("Nhap n: ");
	scanf("%d", &n);
	fibo = FIBONACCI(n);
	printf("So thu %d trong dãy fibo la: %d", n, fibo);	
} 
