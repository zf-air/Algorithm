#include<stdio.h>
#define N 10001
int n, c, flag=0, cw=0;
int w[N], r[N];
int x[N]={0};
void Backtrace(int t){
    int i;
    if(flag)
        return;
    if(cw+r[t]<c)
        return;
    if(cw==c){
        for(i=1;i<=n;i++)
            if(x[i])
                printf("%d ",w[i]);
        flag=1;
        return;
    }
    if(t>n)
        return;
    if(cw+w[t]<=c){
        x[t]=1;
        cw+=w[t];
        Backtrace(t+1);
        x[t]=0;
        cw-=w[t];
    }
    Backtrace(t+1);
    return;
}
int main(){
    int i;
    scanf("%d %d",&n,&c);
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    for(i=n-1,r[n]=w[n];i>=1;i--)
        r[i]=w[i]+r[i+1];
    Backtrace(1);
    if(!flag)
        printf("No Solution!\n");
    return 0;
}
