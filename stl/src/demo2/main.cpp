#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[7]={1,2,5,8,4,3,1};
    cout<<"source:"<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    //reverse,翻转
    reverse(a,a+7);
    cout<<"reverse:"<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    //1 3 4 8 5 2 1

    //rorate,以n为边界，两边翻转
    rotate(a,a+4,a+7);
    cout<<"rorate:"<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    //5 2 1 1 3 4 8

    //random_shuffle,随机排序，适用于数组类型，string，vector
    random_shuffle(a,a+7);
    cout<<"random_shuffle:"<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    //3 2 8 1 5 4 1

}
