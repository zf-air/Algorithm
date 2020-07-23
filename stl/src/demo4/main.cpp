#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7]={1,2,5,8,4,3,1};
    cout<<"source:"<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    //count,值为n的个数
    int num=count(a,a+7,1);
    cout<<"count:"<<endl;
    cout<<"num:"<<num<<endl;
    //num:2

    //accumuulate,计算总和,最后一個参数为累加的初值
    int sum=accumulate(a,a+7,0);
    cout<<"accmulate:"<<endl;
    cout<<"sum:"<<sum<<endl;
    //sum:24

    //partial_sum,累加和,最后一个参数为int* 类型，表示结果加在哪个位置
    partial_sum(a,a+7,a);
    cout<<"partial_sum:"<<endl;
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;
    //1 3 8 16 20 23 24

}
