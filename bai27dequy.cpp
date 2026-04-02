//Tinh giai thua: n!
#include<stdio.h>
int Tinh_giaithua(int n)
{
	if(n==0)
		return 1;
	else
		return n * Tinh_giaithua(n-1); 
}
main()
{
	int n, S;
	printf("Nhap n: ");
	scanf("%d", &n);
	S = Tinh_giaithua(n);
	printf("S = %d", S); 
} 
