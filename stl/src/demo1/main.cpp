#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char a[3]={'b','a','c'};
    //next_permutation,之后的全排列
    do{
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }while(next_permutation(a,a+3));

    cout<<"--------------"<<endl;
    //prev_permutation,之前的全排列
    do{
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }while(prev_permutation(a,a+3));

    /*
        output:
        b a c
        b c a
        c a b
        c b a
        --------------
        a b c
    */
}
