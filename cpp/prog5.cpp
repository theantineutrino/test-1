#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        cin>>arr[i][j];
	    }
	}
	cout<<"the matrix is:\n";
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	bool flag=false;
	int x;
	cin>>x;
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        if(arr[i][j]==x){
	            cout<<i<<"\t"<<j;
	            flag = true;
	        }
	    }
	    
	}
	if(flag){
	    cout<<"\n the element is present";
	}
	else{
	    cout<<"\n the element is not present";
	}
	    
	return 0;
}
