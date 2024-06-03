#include <stdio.h>
#include <math.h>
double area = 0;
double radius = 0;
const double PI = 3.141593;
int main()
{
    printf("Vui long nhap dien tich \r\n");
    scanf("%lf",&area);
    radius = sqrt(area/(4*PI));
    printf("%lf \r\n",radius);
    printf("The tich = %f \r\n", ((4*PI*radius*radius*radius)/3));
    return 0;
}