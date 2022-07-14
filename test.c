#include<stdio.h>
#include<math.h>
int isprime(int n);
void printFactor( int, int ); 

int main()
{
    int a,b,i ;

    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;    

    return 0;
}

int isprime(int n)
{
	if(n==1) return 0;
	if(n>1)
	{
		int i;
		for(i=2;i<=(int)sqrt(n);i++)
		{
			if(n%i==0) break;
		}
		if(i>(int)sqrt(n)) return 1;
		else return 0;
	}
}

void printFactor(int n,int a)
{
	if(a==1&&n!=1) printf("%d=",n);
	if(a==1&&n==1) printf("1=1\n");
	a++;
	if(isprime(n)==1)
	{
		printf("%d\n",n);
		//return;
	}
	if(isprime(n)==0)
	{
		for(int i=2;i<=(int)sqrt(n);i++)
		{
			if(n%i==0&&isprime(i)==1)
			{
				printf("%d*",i);
				printFactor(n/i,a);
				break;
			}
		}
	}
}
