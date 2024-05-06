#include <iostream>
using namespace std;
// But one more thing I have to say in C++, the concept of refences, It's a nickname of the variable as well as alias.
// It not a pointer
// So this is possible with the help of inline function. It all depends on the compiler on whiteboard. I have said it may become a inline function, but it's not mandatory.
// Anyway, it depend how a compiler implements references.
void swap(int &x, int &y)
{
  int tmp = 0;
  tmp = x;
  x = y;
  y =tmp;
  printf("You used the function pass reference \r\n");
}
void swap(int *x, int *y)
{
  int tmp = 0;
  tmp = *x;
  *x = *y;
  *y =tmp;
  printf("You used the function pass address \r\n");
}

int main() {
  
  int a = 30, b=20;
  swap(&a,&b);
  printf("a = %d, b = %d \r\n",a,b);
  return 0;
}