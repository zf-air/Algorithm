#include <iostream>
using namespace std;
double fact(int a){
    double result=1;
    while(a>1){
        result*=a;
        a--;
    }
    return result;
}
int main(){
    int m,n;
    cin>>m>>n;
    double result;
    result=fact(n)/fact(m)/fact(n-m);
    cout<<"result = "<<result<<endl;
}
