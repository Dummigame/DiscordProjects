//F(n)=F(n-1)+F(n-2)

#include <stdio.h>

int main()
{
    long long result=0;

    int limit=5;
    int n=2;

    for(int i=0; i<limit; i++)
    {
        result+=n-1+n-2;
        n++;
    }
    if(n==1)result=1;
    else if(n==0)result=0;
    printf("\n%lld\n",result);
    return 0;
}