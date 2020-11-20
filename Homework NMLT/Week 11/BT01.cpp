#include<stdio.h>;
#include<math.h>;
#include<conio.h>;

struct phanso
{
	int tu;
	int mau;
};

void nhapphanso(phanso &ps)
{
	printf("Nhap vao tu so: "); scanf("%d", &ps.tu);
	do
	{
		printf("Nhap vao mau so: "); scanf("%d", &ps.mau);
		if (ps.mau == 0)
			printf("Mau so khong the bang 0, vui long nhap lai.\n");
	} while (ps.mau == 0);
}
void xuatphanso(phanso ps)
{
	printf("%d / %d", ps.tu, ps.mau);
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
void rutgon(phanso &ps)
{
	int temp = UCLN(ps.tu, ps.mau);
	ps.tu = ps.tu / temp;
	ps.mau = ps.mau / temp;
}
phanso tongphanso(phanso a, phanso b)
{
	phanso tong;
	tong.tu = a.tu*b.mau + b.tu*a.mau;
	tong.mau = a.mau*b.mau;
	rutgon(tong);
	return tong;
}
phanso hieuphanso(phanso a, phanso b)
{
	phanso hieu;
	hieu.tu = a.tu*b.mau - b.tu*a.mau;
	hieu.mau = a.mau*b.mau;
	rutgon(hieu);
	return hieu;
}
phanso tichphanso(phanso a, phanso b)
{
	phanso tich;
	tich.tu = a.tu*b.tu;
	tich.mau = a.mau*b.mau;
	rutgon(tich);
	return tich;
}
phanso thuongphanso(phanso a, phanso b)
{
	phanso thuong;
	thuong.tu = a.tu*b.mau;
	thuong.mau = a.mau*b.tu;
	rutgon(thuong);
	return thuong;
}
int sosanhphanso(phanso a, phanso b) // ( -1 neu a>b, 0 neu a=b, 1 neu a<b)
{
	if ((a.tu*b.mau) > (b.tu*a.mau))
		return -1;
	else if ((a.tu*b.mau) == (b.tu*a.mau))
		return 0;
	else return 1;
}
int kiemtraamduong(phanso ps) // -1 am, 1 duong
{
	if (ps.tu < 0)
	{
		if (ps.mau < 0)
			return 1;
		else return -1;
	}
	else if (ps.tu > 0)
	{
		if (ps.mau < 0)
			return -1;
		else return 1;
	}
}
void main()
{
	phanso x,y;
	printf("=====Nhap phan so thu 1=====\n");
	nhapphanso(x);
	printf("Phan so vua nhap la: "); xuatphanso(x); printf("\n");
	printf("=====Nhap phan so thu 2=====\n");
	nhapphanso(y);
	printf("Phan so vua nhap la: "); xuatphanso(y); printf("\n");
	phanso tong = tongphanso(x, y);
	printf("Tong hai phan so la: "); xuatphanso(tong); printf("\n");
	phanso hieu = hieuphanso(x, y);
	printf("Hieu hai phan so la: "); xuatphanso(hieu); printf("\n");
	phanso tich = tichphanso(x, y);
	printf("Tich hai phan so la: "); xuatphanso(tich); printf("\n");
	phanso thuong = thuongphanso(x, y);
	printf("Thuong hai phan so la: "); xuatphanso(thuong); printf("\n");
	if (sosanhphanso(x, y) == -1)
	{
		printf("Phan so "); 
		xuatphanso(x);
		printf(" lon hon phan so ");
		xuatphanso(y); 
		printf("\n");
	}
	else if (sosanhphanso(x, y) == 0)
	{
		printf("Phan so "); 
		xuatphanso(x); 
		printf(" bang phan so "); 
		xuatphanso(y); printf("\n");
	}
	else
	{
		printf("Phan so "); 
		xuatphanso(x); 
		printf(" nho hon phan so "); 
		xuatphanso(y); printf("\n");
	}
	if (kiemtraamduong(x) == 1)
	{
		printf("Phan so ");
		xuatphanso(x);
		printf(" duong.\n");
	}
	if (kiemtraamduong(x) == -1)
	{
		printf("Phan so ");
		xuatphanso(x);
		printf(" am.\n");
	}
	if (kiemtraamduong(y) == 1)
	{
		printf("Phan so ");
		xuatphanso(y);
		printf(" duong.\n");
	}
	if (kiemtraamduong(y) == -1)
	{
		printf("Phan so ");
		xuatphanso(y);
		printf(" am.\n");
	}
}