#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int randomSoChan(int min, int max)
{
	srand(time(NULL));
	if (min % 2 == 1)
		min++;
	if (max % 2 == 1)
		max--;
	int random = (rand() % (max + 1 - min) + min)/2;
	return random*2;
}

int main()
{
	cout << randomSoChan(96,100);
	getchar();
	return 0;
}
