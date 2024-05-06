#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breath;
};
//1. Pass by value
void pass_by_value(struct Rectangle r1)
{
    printf("%s Before Length and breath = %d and %d \r\n",__FUNCTION__, r1.length,r1.breath);
    //Request change length = 25
    r1.length = 25;
}
//2. Pass by Reference
void Pass_by_reference(struct Rectangle &r1)
{
    printf("%s Before Length and breath = %d and %d \r\n",__FUNCTION__, r1.length,r1.breath);
    //Request change length = 25
    r1.length = 25;
}
//3. Set length 
void setLength(struct Rectangle *r1)
{
    printf("%s Before Length and breath = %d and %d \r\n",__FUNCTION__, r1->length,r1->breath);
    //Request change length = 20
    r1->length = 20;
}
//4. We can pass value array instead of Address ONLY by structure
struct fullArrayPassedValue{
    int array[5];
    int size ;
};
void showValueOfStruct(struct fullArrayPassedValue a)
{
    cout<<"Start printf from function "<< __FUNCTION__<<endl; 
    for(int x: a.array)
    {
        cout<< x<< endl;
    }
}
void setValueOfArrayInStruct(struct fullArrayPassedValue *a)
{
    cout<<"Start printf from function "<< __FUNCTION__<<endl; 
    a->array[0] = 10;
}
int main()
{
    struct Rectangle r={.length =20, .breath = 10};
    pass_by_value(r);
    printf("%s After Length and breath = %d and %d \r\n","pass_by_value", r.length,r.breath);
    //OutPut:
    /*
     pass_by_value Before Length and breath = 20 and 10
     pass_by_value After Length and breath = 25 and 10 => IT'S NOT CHANGED
    */
    Pass_by_reference(r);
    printf("%s After Length and breath = %d and %d \r\n","Pass_by_reference", r.length,r.breath);
    //OutPut:
    /*
     Pass_by_reference Before Length and breath = 20 and 10
     Pass_by_reference After Length and breath = 25 and 10 => IT'S CHANGED
    */
    setLength(&r);
    printf("%s After Length and breath = %d and %d \r\n","setLength", r.length,r.breath);
    //OutPut:
    /*
     setLength Before Length and breath = 25 and 10
     setLength After Length and breath = 20 and 10 => IT'S CHANGED
    */
    struct fullArrayPassedValue arrayPassed = {{1,3,4,5,6},5};
    showValueOfStruct(arrayPassed);
    setValueOfArrayInStruct(&arrayPassed);
    showValueOfStruct(arrayPassed);

    return 0;
    
}