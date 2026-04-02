//Tinh tong: S = -1 + 1/2! - 1/3! + 1/4! - ... +/- 1/n!
#include<stdio.h>
int Tinh_giaithua(int n)
{
	if(n==0)
		return 1;
	else
		return n * Tinh_giaithua(n-1); 
}
float Tinh_tong(int n)
{
	if(n==0)
		return 0;
	else
		if(n%2==0)
			return 1.0/Tinh_giaithua(n) + Tinh_tong(n-1);
		else
			return -1.0/Tinh_giaithua(n) + Tinh_tong(n-1); 
} 
main()
{
	int n;
	float S;
	printf("Nhap n: ");
	scanf("%d", &n);
	S = Tinh_tong(n);
	printf("S = %f", S); 
} 
