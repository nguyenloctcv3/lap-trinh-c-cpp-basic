#include<stdio.h>
int TONG_CAC_SO_CHAN(int n)
{
	if(n==0)
		return 0;
	else 
		if(n<10)
		{
			if(n%2==0)
				return n;
			else
				return 0; 
		} 
		else
		{
			if(n%2==0)
				return n%10 + TONG_CAC_SO_CHAN(n/10);
			else
				return TONG_CAC_SO_CHAN(n/10); 
			
		}
} 
main() 
{
	int n, tcsc;
	printf("Nhap n: ");
	scanf("%d", &n);
	tcsc= TONG_CAC_SO_CHAN(n);
	printf("Tong cac so chan so chan :%d", tcsc); 
}
