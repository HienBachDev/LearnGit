#include <iostream>
#include <math.h>
using namespace std;
int a;
int b;
int main()
{
	cout<<"viet";
	cout<<"khanh dep trai";
	cout << "hello world" ;
	int n ;
	cin >> n;
	for (int i = int(sqrt(n)); i > 0 ;i--)
	{
		if (n%i ==0 )
		{	
		cout << i <<" " << n/i <<endl; 
	    break;
		}
	}
	return 0 ;
}
