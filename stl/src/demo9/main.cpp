#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[8]={1,2,5,8,1,4,3,1};
    cout<<"source:"<<endl;
    for(int i=0;i<8;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    vector<int> v(8);
    copy(a,a+8,v.begin());
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    //remove
    auto p=remove(begin(v),end(v),1);
    for(auto q=begin(v);q!=p;q++)
        cout<<*q<<" ";
    cout<<endl;

    //erase, 左开右闭,用于string
    string s="hello world";
    s.erase(begin(s),begin(s)+5);
    cout<<s<<endl;

}
