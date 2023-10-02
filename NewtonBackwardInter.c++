#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}
float calculatePValue(int n,float p){
    float ans=1;
    for(int i=0;i<n;i++){
        ans*=p+i;
    }
    return ans;
}
int main(){
    int n;
    float x,h,p;
    cout<<"Enter Number of values"<<endl;
    cin>>n;
    float table[n][n+1];
    cout<<"Enter value of X0 to Xn-1"<<endl;
    for(int i=0;i<n;i++){
        cin>>table[i][0];
    } 
    cout<<"Enter value of Y0 to Yn-1"<<endl;
    for(int i=0;i<n;i++){
        cin>>table[i][1];
    }
    cout<<"Enter value of x"<<endl;
    cin>>x;
    h=table[1][0]-table[0][0];
    p=(x-table[n-1][0])/h;
    for(int j=2;j<=n;j++){
        for(int i=n-1;i>=j-1;i--){
            table[i][j]=table[i][j-1]-table[i-1][j-1];
        }
    }
    cout<<"Backward Difference Table is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(j>i+1){
                cout<<" ";
            }
            else{
                cout<<table[i][j]<<" ";
            }
            
        }
        cout<<endl;
    }

    float fx=0;
    for(int i=0;i<n;i++){
        fx+=(table[n-1][i+1]*calculatePValue(i,p))/fact(i);
    }
    
    cout<<"Value is: "<<fx<<endl;
    return 0;

}