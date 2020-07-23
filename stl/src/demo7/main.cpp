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

    sort(a,a+7);
    //unique,去重, 前提是要排序
    int *p=unique(a,a+7);
    cout<<p-a<<endl;
    for(int i=0;i<p-a;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    //replace,替换
    replace(a,a+6,1,7);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
