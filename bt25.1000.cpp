//Tinh tong cac uoc so chan cua so nguyen n
#include<stdio.h>
main()
{
	int i, n, S; 
	printf("Nhap n: ");
	scanf("%d", &n);
	S=0; 
	for(i=1;i<=n;i++)
		if(n%i==0)
			if(i%2==0)
				S=S+i;
	printf("Tong cac uoc so chan cua n la: %d", S); 
 }  
