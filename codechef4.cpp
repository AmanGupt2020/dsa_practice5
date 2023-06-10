#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	while(n--){
		cin>>x;
		int first;    
		int last = (x%10);
		if( x<10){
			cout<<(last+x)<<endl;
			
		}
		else{
		  while(x!=0){    
			x=x/10;
			if(x<10 && x>0)
			first=x;  
		    
		}
		
		
	
		cout<<(last+first)<<endl;
		}
	}
	
	return 0;
}
