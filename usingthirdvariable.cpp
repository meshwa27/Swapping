#include <iostream>

using namespace std;
int main(){
	int x,y,z;
	cout << "Enter the value x :";
	cin >> x;
	cout << "Enter the value y :";
	cin >> y;
	
	z=x;
	x=y;
	y=z;
	
	cout << "x =" << x << endl;
	cout << "y =" << y;	
	return 0;
}