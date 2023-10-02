/*Write a program to implement Bisection method.*/
#include<bits/stdc++.h>
#define EPSILON 0.01
using namespace std;
#define f(x) x*x*x-x*x+2
int main(){
    double a,b;
    cout<<"Enter Two values a and b:"<<endl;
    cin>>a>>b;
    if((f(a))*(f(b))>=0){
        cout<<"You have not assumed right a and b"<<endl;
        return 0;
    }
    double c = a;
    while((b-a)>=EPSILON){
        c=(a+b)/2;
        if(f(c)==0.0){
            break;
        }
        else if((f(c))*(f(a))<0){
            b=c;
        }
        else{
            a=c;
        }
    }
    cout<<"The value of the root is: "<<c<<endl;
    return 0;
}
