#include<bits/stdc++.h>
using namespace std;

int main(){

	double true_value,approx_value;
	cout<<"Enter true value = ";
	cin>>true_value; 
	cout<<"Enter approximate value = ";
	cin>>approx_value;
	
	//Absolute error
	double abs_error=abs(true_value-approx_value);
	
	//Relative error
	double rel_error=abs_error/true_value;
	
	//Percentage error
	double per_error=rel_error*100;
	
	cout<<"Absolute Error= "<<abs_error<<endl;
	cout<<"Relative Error= "<<rel_error<<endl;
	cout<<"Percentage Error= "<<per_error<<endl;
}
