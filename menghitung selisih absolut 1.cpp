#include <iostream>
#include <stdio.h>
#include <cmath.>

using namespace std;

int main() {

	int x,y,z;
	cout << "input nilai x = ";
	cin >> x;
	cout << "input nilai y = ";
	cin >> y;
	
	if ( x > y);{
	z = y - x;
	cout<<abs(z)<<endl;
	cout<<"Hasil Positif ";
	
	}
	
	if( y > x);{
	z = x - y;
	cout<<abs (z)<<endl;
	cout<<"Hasil Positif ";
	
	}
	
		if ( z < 0);{
		z = z * (-1);
		cout<<abs (x-y)<<endl;
		cout<<"Hasil Positif ";
	}
}
