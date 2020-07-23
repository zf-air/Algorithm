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

    //copy
    int b[7];
    copy(a,a+7,b);
    for(int i:b)
        cout<<i<<" ";
    cout<<endl;

    //equal,比较两个数组是否大小相等，内容相等
    int flag=0;
    flag=equal(a,a+7,b);
    cout<<flag<<endl;

    //search,在a数组中找b的子数组，返回第一次找到的指针
    int* p=search(a,a+7,b+2,b+4);
    cout<<p-a<<endl;

}
