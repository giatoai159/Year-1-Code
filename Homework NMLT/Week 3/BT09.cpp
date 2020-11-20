#include<stdio.h>;

void main()
{
	int scong, stru, m, h, s1, s2, h1, h2, m1, m2;
	m = 0;
	h = 0;
	printf("Nhap h,m,s 1: "); scanf("%d%d%d", &h1, &m1, &s1);
	printf("Nhap h,m,s 2: "); scanf("%d%d%d", &h2, &m2, &s2);
	s1 = h1 * 3600 + m1 * 60 + s1;
	s2 = h2 * 3600 + m2 * 60 + s2;
	scong = s1 + s2;
	stru = s1 - s2;
	while (scong >= 60)
	{
		if (scong >= 60)
		{
			scong -= 60;
			m += 1;
		}
		if (m > 60)
		{
			m -= 60;
			h += 1;
		}
		if (h >= 24)h -= 24;
	}
	printf("Cong: %d h,%d m,%d s\n",h,m,scong);
	m = 0;
	h = 0;
	if (stru >= 0)
	{
		while (stru >= 60)
		{
			if (stru >= 60)
			{
				stru -= 60;
				m += 1;
			}
			if (m > 60)
			{
				m -= 60;
				h += 1;
			}
			if (h >= 24)h -= 24;
		}
		printf("Tru: %d h,%d m,%d s\n", h, m, stru);
	}
	else
	{
		stru = 86400+stru;
		while (stru >= 60)
		{
			if (stru >= 60)
			{
				stru -= 60;
				m += 1;
			}
			if (m > 60)
			{
				m -= 60;
				h += 1;
			}
			if (h >= 24)h -= 24;
		}
		printf("Tru: %d h,%d m,%d s ngay hom truoc\n", h, m, stru);
	}
}