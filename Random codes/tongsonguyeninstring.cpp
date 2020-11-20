#include<iostream>
#include<cstdlib>
using namespace std;

int isNum(char n)
{
	int temp = n-48;
	if (temp == 0 || temp == 1 || temp == 2 || temp == 3 || temp == 4 || temp == 5 || temp == 6 || temp == 7 || temp == 8 || temp == 9) return 1;
	else return 0;
}

int tongSoNguyen(const char *s)
{
	int S = 0;
	int n = strlen(s);
	char *p=new char[n];
	strcpy(p, s);
	while (*p)
	{
		if (isNum(*p))
		{
			long val = strtol(p, &p, 10);
			S += val;
		}
		else p++;
	}
	return S;
}

void main()
{
	char *str = "aa11b33";
	cout << tongSoNguyen(str);
}

