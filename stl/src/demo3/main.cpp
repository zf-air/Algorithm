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

    //partition,把满足条件的排在左边，不满足的排在右边
    auto it=partition(a,a+7,[](int i){return i<5;});
    for(int* i=a;i<it;i++)
        cout<<*i<<" ";
    cout<<endl;
    //1 2 1 3 4
    for(int* i=it;i<a+7;i++)
        cout<<*i<<" ";
    cout<<endl;
    //8 5
}
