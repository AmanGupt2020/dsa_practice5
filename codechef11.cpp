#include<iostream>
using namespace std;
int main(){
	double dollar=120.00;
	int money;
	cin>>money;
	if(money%5==0 && money<dollar){
	      dollar=dollar-money;
		  dollar=dollar-0.50;
		  cout<<dollar<<endl;	
	}
	else{
		cout<<dollar(d)<<endl;
	}
	
	return 0;
}
