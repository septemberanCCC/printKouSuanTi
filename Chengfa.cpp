#include <stdio.h>
#include <ctime>
#include <cstdlib>
int main()
{
    using namespace std;
	double random(double,double);
	void printOneDengshi();
	const int M =5;
	const int N = 20;

    srand(unsigned(time(0)));	
	for(int j=0;j<N;j++)
	for(int i=0;i<M;i++)
	{
		printOneDengshi();
		if(i==M-1)printf("\n\n");

	}
    return 0;
}

double random(double start, double end)
{
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

void printOneDengshi()
{
	int a = 0;
	int b = 0;
	
		a = int(random(1,10));
		b = int(random(1,10));
	
		printf("%d x %d =    \t",a,b);
}


