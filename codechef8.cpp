#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int even=0;
		int odd=0;
	while(n--){
		int num;    
		cin>>num;   
		
		if(num%2==0){
			even++;  
		}
		else{
			odd++;  
		}
		
	}
	cout<<(even-odd)<<endl;
	
	
	return 0;
}
