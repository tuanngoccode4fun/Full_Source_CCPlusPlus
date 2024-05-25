#include<stdio.h>
#include <math.h>
#define  ll unsigned long long int 
/*
So nguyen to tieng anh la gi? 

*/
ll isprime(ll input )
{
     for(ll i  = 2; i<= sqrt(input);i++)
     {
        if(input%i == 0)
        {
            printf("Hello return nhe \r\n");
            return 0;
        }
     }
     return input > 1;
}
int main()
{
    ll so;
    printf("Vui long nhap so \r\n");
    scanf(" %llu", &so);
    printf("%s \r\n",isprime(so)?"So nguyen to": "Khong phai so nguyen to");
    return 0;

}