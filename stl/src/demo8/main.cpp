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

    //all_of,全部满足条件
    int flag;
    flag=all_of(a,a+7,[](int i){return i>1;});
    cout<<flag<<endl;//0

    //any_of,有一个满足条件
    flag=any_of(a,a+7,[](int i){return i>1;});
    cout<<flag<<endl;//1

    //none_of,没有一个满足条件
    flag=none_of(a,a+7,[](int i){return i>1;});
    cout<<flag<<endl;//0

}
