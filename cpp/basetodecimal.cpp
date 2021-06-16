#include <iostream>
using namespace std;
int dtb(int n, int b){
    int rv = 0;
    int p = 1;
    	while(n>0)
    	{
	    int k =  n % b;
	    n = n / b ;
	    rv += k * p;
	    p = p * 10;
    	    
    	}
	    return rv;
}
int main() {
	int n, b;
	cin>>n>>b;
	cout<<dtb(n,b);
	return 0;
}
