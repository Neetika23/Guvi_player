#include<bits/stdc++.h>
using namespace std;
void fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++){
    f=f*i;
    cout<<f;
}
}
int main()
{
    int num;
    cin>>num;
    if(num<=20)
        fact(num);
    else
        cout<<"Invalid input";
    }
