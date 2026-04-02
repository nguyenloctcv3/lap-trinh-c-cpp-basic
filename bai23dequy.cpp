//Tinh tong: S = -1 + 2 - 3 + 4 - ... +/- n
#include<stdio.h>
int Tinh_tong(int n)
{
	if(n==0)
		return 0;
	else
		if(n%2==0)
			return n +  Tinh_tong(n-1);
		else
			return -n +  Tinh_tong(n-1); 
}
main()
{
	int n, S;
	printf("Nhap n: ");
	scanf("%d", &n);
	S = Tinh_tong(n);
	printf("S = %d", S); 
} 
