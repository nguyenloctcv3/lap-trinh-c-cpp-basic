#include<stdio.h> //1 lan buoc di 1 hoac 2 bac, hoi co bao nhieu cach buoc len n bac 
int SoCachBuocDi(int n)  
{
	if(n==1 || n==0)
		return 1;
	else 
		return SoCachBuocDi(n-1) + SoCachBuocDi(n-2);
}
main()
{
	long int n, scbd;
	scanf("%d", &n);
	scbd = SoCachBuocDi(n);
	printf("%d", scbd); 
} 
