#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000
#define f(x) x*x*x+4*x*x-10
int main(){
    double a,b;
    cout<<"Enter a and b initial values:"<<endl;
    cin>>a>>b;
    if((f(a))*(f(b))>=0){
        cout<<"you hava not assumed right a and b"<<endl;
        return 0;
    }
    double c=a;
    for(int i=0;i<MAX_ITER;i++){
        c=(a*(f(b))-b*(f(a)))/((f(b))-(f(a)));
        if(f(c)==0){
            break;
        }
        else if((f(c))*(f(a))<0){
            b=c;
        }
        else{
            a=c;
        }
    }
    cout<<"The value of root is:"<<c<<endl;
    return 0;
}
