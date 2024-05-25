#include <stdio.h>
#include <stdbool.h>
int isPrime[1000001];
int Sieve()
{
   for(int i = 0;i<=1000000;i++)
   {
    isPrime[i]= 1;
   }
    isPrime[0] = isPrime[1] = 0;
   for(int i = 2;i<=1000;i++)
   {
        if(isPrime[i])
        {
            for(int j = i*i;j<=1000000;j+=i)
            {
                isPrime[j] = 0;
            }
        }
        // printf("%d ",isPrime[i]);
   }
}
int main()
{
    int x = 0;
    Sieve();
    printf("Vui long nhap vo so 0 den 10^6 \r\n");
    scanf("%d",&x);
    for(int i = 0;i<=x;i++)
    {
        if(isPrime[i])
        printf("%d ",i);
    }
}