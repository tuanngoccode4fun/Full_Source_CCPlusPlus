#include <iostream>

using namespace std;
// array pass to function is pass address only
// so we can't get lenght of array which passed address through parameter of function
void function_verify_sizeof_array(int array[])
{
    cout<<"Size of function "<<(sizeof(array)/sizeof(int))<<endl;
    // for(int x:array) => YOU CAN'T USE cause it's not array.
    // {
    //     printf("value of x =%d ", x);
    // }
}
void display_array(int array[], int count)
{
    int i = 0;
    printf("START FROM FUNCTION %s \r\n",__FUNCTION__);
    for (i = 0;i< count ;i++)
    {
        printf("%d ", array[i]);

    }
    printf("\r\n");
}

void display_array_other(int *array, int count)
{
    int i = 0;
    printf("START FROM FUNCTION %s \r\n",__FUNCTION__);
    for (i = 0;i< count ;i++)
    {
        printf("%d ", array[i]);

    }
    printf("\r\n");
}
//Create a function allocated from heap
int * createArray(int size)
{
    int *p;
    p = (int*)malloc(size*sizeof(int));
    for(int i = 0;i<size;i++)
    {
        p[i]= i+1;
    }
    return(p);
}
int main()
{
    int count = 6;
    int array[count]={4,7,3,8,5};
    int *array_new_from_heap;
    cout<<"Size of original NOT pass into function is "<< sizeof(array)/sizeof(int)<<endl;
    function_verify_sizeof_array(array);
    for(int x:array)
    {
        printf("%d ",x);
        printf("\r\n");
    }
    display_array(array,count);
    display_array_other(array,count);
    // In the main function, It has no array. 
    array_new_from_heap= createArray(count);
    display_array(array_new_from_heap,count);
   delete array_new_from_heap;
    return 0;
}