#include <iostream>
using namespace std;
int btd(int n , int b){
    int rv = 0;
    int p = 1;
    	while(n>0)
    	{
	    int k = n%10;
	    n = n / 10;
	    rv += k * p;
	    p = p * b;   
    	}
	    return rv;
}
int main() {
	int n, b;
	cin>>n>>b;
	cout<<btd(n,b);
	return 0;
}
