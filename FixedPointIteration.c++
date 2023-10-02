#include<bits/stdc++.h>
using namespace std;
#define f(x) cos(x)-3*x+1
#define g(x) (1+cos(x))/3
int main(){
    int step=1,N;
    float x0,x1,e;
    cout<<"Enter Initial guess:"<<endl;
    cin>>x0;
    cout<<"Enter tolerable error:"<<endl;
    cin>>e;
    cout<<"Enter Maximum iteration:"<<endl;
    cin>>N;
    /* Implementing Fixed Point Iteration */
	printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");

    do{
        x1=g(x0);;
        cout<<step<<"       "<<x0<<"       "<<f(x0)<<"     "<<x1<<"     "<<f(x1)<<endl;
        step+=1;
        if(step>N){
            printf("Not Convergent.");
            exit(0);
        }
        x0=x1;
    }while(fabs(f(x1))>e);
    cout<<"Root is"<<x1<<endl;
    return 0;
}   