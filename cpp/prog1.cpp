#include <iostream>
using namespace std;

int main() {
	int n,Number,count;
	cin>>n;
	 for(Number = 1; Number <= n; Number++)
  {
    count = 0;
    for (int i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	cout<<Number<<"\n";
    }  
  }
	return 0;
}
