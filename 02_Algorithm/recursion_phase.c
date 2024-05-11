#include <stdio.h>
// Go to next room and turn on Buld light
void recursion_1(int n)
{
    printf("# %d ", n);
    if(n> 0)
    {
        recursion_1(n -1);// printf after
        printf("%d ",n);
    }
        printf("\n");
}
void recursion_2(int n)
{
    printf("# %d ", n);
    if(n> 0)
    {
        printf("%d ",n);//Printf first
        recursion_2(n -1);// 
    }
}
int main()
{
    recursion_1(4);
    recursion_2(4);
    return 0;
}