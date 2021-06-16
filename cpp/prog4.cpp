#include <iostream>
using namespace std;

int main() {
    int n1,n2,max,gcd;
    cin>>n1>>n2;
	 max = (n1 > n2) ? n1 : n2;
	  for (int i = 1; i <= n1 && i <= n2; ++i) {
        
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    cout<<gcd<<endl;
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
           cout<<max;
            break;
        }
        ++max;
    }
	return 0;
}
