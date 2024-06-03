#include <iostream>
//#include <bits/stdc++.h>
#include <math.h>
#include <stack>
using namespace std;
stack<int> ngocList;
int main()
{
    cout<<"Hello welcome to tuan ngoc"<<endl;
    cout<<"Can bac 2 cua so 4: "<<sqrt(4)<<endl;
    ngocList.push(21);
    ngocList.push(22);
    ngocList.push(23);
    ngocList.push(24);
    ngocList.push(25);
    while(!ngocList.empty())
    {
        cout<<ngocList.top()<<endl;
        ngocList.pop();
    }
    return 0;
}