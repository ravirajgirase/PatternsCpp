#include<iostream>

using namespace std;

int main(){
	
	int n =5;
	cout<<"Pattern 1 \n\n";
	for(int row = 1; row <=n; row++){
		for(int col = 1; col <= n; col++){
			
			cout<<col<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Pattern 2 \n\n";
	
	for(int row=1; row<=n; row++){
		for(int col = 1; col<=row; col++){
			cout<<col<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Pattern 3 \n\n";

	for(int row =1;row<=n;row++){
		for(int col=n;col>=row;col--){
			cout<<col<<" ";
		}
		cout<<"\n";
	}	
	
	cout<<"Pattern 4 \n\n";
	
	for(int row =1; row<=2*n ;row++){
	
		int ncol = (row>n)?2*n-row:row;
		for(int col=1; col<=ncol; col++){
			cout<<col<<" ";
		}
//		if(row>n){
//			for(int col=1;col<=2*n-row-1;col++){
//				cout<<col<<" ";
//			}
//		}
//		else{
//			for(int col=1; col<=row;col++){
//				cout<<col<<" ";
//			}
//		}
		cout<<"\n";
	}
	
	cout<<"Pattern 5 \n\n";
	
	for(int row =1; row <=n*2; row++){
		
		int totalCol = (row>n)?2*n-row:row;
		int totalSpace = n-totalCol;
		for(int space =1;space<=totalSpace; space++){
			cout<<" ";
		}
		for(int col=1; col<=totalCol; col++){
			cout<<"*"<<" ";
		}
		cout<<"\n";
	}
//	
//	
	cout<<"Pattern 6 \n\n";
//	
	for(int row=1; row<=n*2;row++){
//		
		int totalcol = (row>n)?n*2-row:row;
		for(int p = 0; p<n-totalcol; p++){
			cout<<" ";
		}
		for(int col=totalcol; col>=1;col--){
			cout<<col;
		}
		for(int col=2; col<=totalcol; col++){
			cout<<col;
		}
		cout<<"\n";
	}
	
	
	cout<<"Pattern 7 \n\n";
	
	for(int row=1; row<=n; row++){
		
		
		for(int col = 1; col<=n;col++){
			if(col>=row){
			
			cout<<"*";
		}
			else{
			cout<<" ";
		}
		}
		
		cout<<"\n";
	}
	
	
}