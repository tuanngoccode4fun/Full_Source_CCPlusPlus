#include <iostream>
#include <vector>
#include <bits/stdc++.h> // fOR SUPPORT SORT.
std::vector <int> vtList{3,4,2,4,5,3,5,6,7,8,4,2,1,0};
void display(std::vector<int> vtInput)
{
    for(int x: vtInput)
    {
        std::cout<<x <<" ";
    }
    std::cout <<std::endl;
}
int main()
{
    display(vtList);// Before
    std::sort(vtList.begin(), vtList.end());// Increatement
    display(vtList);
    std::sort(vtList.begin(), vtList.end(),std::greater<int>());//Decrement
    display(vtList);
    return 0;
}