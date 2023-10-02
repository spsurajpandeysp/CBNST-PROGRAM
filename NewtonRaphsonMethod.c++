/*Write a program to implement Newton's Raphson method.*/
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;
#define f(x) x*x*x-x*x+2
#define ff(x) 3*x*x - 2*x
int main(){
    double x0;
    cout<<"Enter x0 value"<<endl;
    cin>>x0;
    double h = (f(x0))/(ff(x0));
    while(abs(h)>=EPSILON){
        h = (f(x0))/(ff(x0));
        x0=x0-h;
    }
    cout<<"The value of the root is: "<<x0<<endl;
    return 0;
}