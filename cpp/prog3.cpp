#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	while(n>0){
	    int digit=n%10;
	    n=n/10;
	    cout<<digit<<endl;
	}
	return 0;
}
