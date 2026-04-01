#include<stdio.h>
int giai_thua(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*giai_thua(n-1); 
}
float tinh_tong(int n)
{
	if(n==0)
		return 0; 
	else
		if(n%2==0) 
			return -1.0/giai_thua(n) + tinh_tong(n-1); 
		else
			return 1.0/giai_thua(n) + tinh_tong(n-1);  
} 
main()
{
	int n, gt;
	float tong;
	scanf("%d", &n);
	gt=giai_thua(n);
	tong=tinh_tong(n);
	printf("n! bang: %d", gt);
	printf("Tong la: %f", tong); 
 } 
