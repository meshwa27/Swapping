#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout << "Enter the value x :";
	cin >> x;
	cout << "Enter the value y :";
	cin >> y;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout << "x is =" << x << endl;
	cout << "y is =" << y;	
	return 0;
}