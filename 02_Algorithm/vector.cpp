#include<iostream>
#include <vector>
#include <string>
std::vector<int> listInterger{1,2,3,4,5,6,7};// From list of values.
std::vector<int> listItemSameValue(4,2); // Multiple identical value.
std::vector<int> listEmptyFirst;// Empty list.
void viewList(std::vector<int> input)
{
    int  isLuckNumber = 10;
    printf("Size of : %d \r\n", input.size());
    for(int x: input)
    {
        printf("%d ", x);
    }
    printf("\n");
}
int main()
{
    listInterger.push_back(100);// We can push back.
    listInterger.pop_back();// We are able to pop back.
    listInterger.resize(10,0);// We're able to utilize resize function.
    listInterger[2]=33;// We're able to insert directly based on index.
    
    viewList(listInterger);
    viewList(listItemSameValue);
    viewList(listEmptyFirst);
    listEmptyFirst.push_back(22);// We can push back vector is empty
    viewList(listEmptyFirst);
    listEmptyFirst = listInterger; // We can get directly by assign
    viewList(listEmptyFirst);

    std::vector<int> deepCopy{listInterger};
    viewList(deepCopy); // Make new vector by deep copy
    std::cout << listInterger.front()<< std::endl;
    std::cout << listInterger.back()<< std::endl;
    deepCopy.reserve(20);
    std::cout <<deepCopy.size();
    viewList(deepCopy);
    if(!deepCopy.empty())
    {
        std::cout<< "Your deep copy has items \r\n";
    }
    deepCopy.insert(deepCopy.end(), 2,7);
    deepCopy.emplace_back(10);
    viewList(deepCopy);

    return 0;
}