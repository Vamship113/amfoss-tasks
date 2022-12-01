#include <iostream>
using namespace std;
int main(){
    long long a,b,c,t=0;
    cin>>a>>b;
    c=b/a;
    if(a==b){
        cout<<t;
        exit(0);}
    if(c<2 or b%a!=0)
    {
        cout<<-1;
        exit(0);
    }
    while(c%2==0){
        t++;
        c=c/2;
        }
    while(c%3==0){
        t++;
        c=c/3;
        }
    if(c>1){
                cout<<-1;
        exit(0);
        }
    cout<<t;    
    }
