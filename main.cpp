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
	int pm = 0;
	
	for(;;)
	{
		a = int(random(0,100));
		b = int(random(0,100));
		pm = int(random(0,2));
		if(pm==0)
		{
			if(a+b>100)
				continue;
			else
				break;
		}
		else
		{
			if(a<b)
				continue;
			else
				break;
		}
	}
		
		if(pm==0)
		printf("%d + %d =    \t",a,b);
	    else
        printf("%d - %d =    \t",a,b);			
}


