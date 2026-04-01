#include<stdio.h>
//pp tru dan 
int UCLN_SO(int a, int b)
{
	if(a==b)
		return a;
	else
		if(a>b)
			return UCLN_SO(a-b, b);
		else
			return UCLN_SO(a, b-a); 
} 
main() 
{
	int x, y, ucln;
	printf("Nhap hai so x va y: ");
	scanf("%d %d", &x, &y);
	ucln = UCLN_SO(x, y);
	printf("Uoc chung lon nhat cua hai so la: %d", ucln); 
}
