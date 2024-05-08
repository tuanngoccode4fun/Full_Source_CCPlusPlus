#include <stdio.h>
int main()
{
    FILE *file = fopen("input.txt","r");
    if(file== NULL)
    {
        printf("Can't find this file \r\n");
    }
    int numTestCase = 0;
    fscanf(file, "%d",&numTestCase);
    printf("numTestCase = %d \r\n",numTestCase );
    for(int i = 0;i < numTestCase;i++)
    {
        int value1, value2, sum;
        fscanf(file, "%d %d %d",&value1, &value2,&sum);

        printf("Value 1 = %d \r\n",value1);
        printf("Value 2 = %d \r\n",value2);
        printf("sum = %d \r\n",sum);

    }
    return 0;
}