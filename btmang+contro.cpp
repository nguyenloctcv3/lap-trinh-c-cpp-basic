#include<stdio.h>
int *Nhap_DS(int *a, int n)
{
	int i;
	a = new int[n+1];
	for(i=1;i<=n;i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]); 
	}
	return a; 
} 
void Xuat_Mang(int *a, int n)
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d ", a[i]); 
}
int KiemTra(int *a, int n, int x)
{
	int i;
	for(i=1;i<=n;i++)
		if(a[i]==x)
			return i;
	return 0;			 
} 
void HoanVi(int &a, int &b)
{
	int tg;
	tg=a;
	a=b;
	b=tg; 
}
int *Sapxepdayso(int *a, int n)
{
	int i,j;
	for(i=1;i<=n-1;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]>a[j])
				HoanVi(a[i], a[j]);
	return a; 
}
int Vitrichen(int *a, int n, int x)
{
	int i;
	i=1;
	while(a[i]<x && i<=n)
		i=i+1;
	return i; 		 
} 
int *Chenso(int *a, int &n, int x)
{
	int vt, i;
	vt = Vitrichen(a, n, x); 
	for(i=n;i<=vt;i--)
		a[i+1]=a[i];
	a[vt]=x;
	n=n+1;
	return a; 
}
int *Xoadayso(int *a, int &n, int vt)
{
	int i;
	if(vt<1 || vt>=n)
		return a; 
	for(i=vt; i<=n-1;i++)
		a[i]=a[i+1];
	n=n-1;
	return a; 
}
int *SapXepHaiDaySo(int *a, int n, int *b, int m, int &k)
{
	int *c;
	int i, j;
	i=1;
	j=1;
	k=0;
	c = new int[n+m+1];
	while(i<=n && j<=m)
	{
		if(a[i]<b[j])
		{
			k=k+1; 
			c[k]=a[i];
			i=i+1; 
		}
		else
		{
			k=k+1; 
			c[k]=b[j];
			j=j+1; 
		}
	}
	while(i <= n)
	{
		k++;
		c[k] = a[i];
		i++;
	}
	while(j <= m)
	{
		k++;
		c[k] = b[j];
		j++;
	}
	return c; 	 
} 
int main()
{
	int *dso, sptu, so, hamtim;
	printf("Nhap nao nhieu so: ");
	scanf("%d", &sptu);
	printf("\n\n");
	dso = Nhap_DS(dso, sptu);
	printf("Danh truoc sau khi nhap: ");
	Xuat_Mang(dso, sptu); 
	printf("\n\n");
	printf("Nhap so can tim: ");
	printf("\n\n");
	scanf("%d", &so);
	hamtim = KiemTra(dso, sptu, so);
	if(hamtim==0)
		printf("So can tim khong co trong danh sach: ");
	else
		printf("So can tim co trong danh sach: ");
	int *ds, *ds1, *ds2;
	int spt, spt1, spt2;
	int vtri; 
	printf("Day 1 nhap bao nhieu so: ");
	scanf("%d", &spt1); 
	ds1 = Nhap_DS(ds1, spt1);
	printf("Day 2 nhap bao nhieu so: ");
	scanf("%d", &spt2); 
	ds2 = Nhap_DS(ds2, spt2);
	printf("Danh sach 1 sau khi nhap: ");
	Xuat_Mang(ds1, spt1);
	printf("Danh sach 2 sau khi nhap: ");
	Xuat_Mang(ds2, spt2);
	printf("\n\n");
	//printf("Nhap vi tri cua so can xoa: ");
	//scanf("%d", &vtri); 
	printf("\n\n");
	//printf("Danh sach phan tu sau khi xoa 1 so: "); 
	//ds = Xoadayso(ds, spt, vtri-1);
	//Xuat_Mang(ds, spt); 
	printf("Danh sach sau khi ghep hai mang: ");
	ds = SapXepHaiDaySo(ds1, spt1, ds2, spt2, spt);
	Xuat_Mang(ds, spt); 
}
