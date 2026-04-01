#include <stdio.h>
int fibo(int n)
{
	int a, b, c;
	if(n==0)
		return 0;
	else
		if(n==1 || n==2)
			return 1;
		else
			return fibo(n-1) + fibo(n-2); 
}
main()
{
	int n, fbo, i;
	scanf("%d", &n);
	printf("cac phan tu cua day fibo la: "); 
	for(i=1;i<=n;i++)
		printf("\n%d", fibo(i)); 
} 
