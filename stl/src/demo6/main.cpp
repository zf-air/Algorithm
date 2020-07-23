#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7]={1,2,5,8,4,3,1};
    cout<<"source:"<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    //lower_bound,大于等于目标值的第一次出现的下标
    auto p=lower_bound(a,a+7,5);
    cout<<p-a<<endl;//2

    //upper_bound,大于目标值的第一次出现的下标
    auto q=upper_bound(a,a+7,5);
    cout<<q-a<<endl;//3

}
