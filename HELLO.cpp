#include <iostream>
#include <math.h>
using namespace std;
int a;
int b;
int main()
{
	cout>> "hello";
	int n ;
	cin >> n;
	for (int i = int(sqrt(n)); i > 0 ;i--)
	{
		if (n%i ==0 )
		{	
		cout << i <<" " << n/i <<endl; 
		cout <<"bach hien";
	    break;
		}
	}
	return 0 ;
}
