#include<iostream>
using namespace std;
int main(){
	int amount,discount;
	cout << "Enter your amount :";
	cin >> amount;
	
	if(amount>0 && amount<=1000){
		discount=(amount*5)/100;
		amount-=discount;
		cout << "Your total amount is " << amount;
	}
	else if(amount>1000 && amount<=5000){
		discount=(amount*10)/100;
		amount-=discount;
		cout << "Your total amount is " << amount;
	}
	else if(amount>5000 && amount<=10000){
		discount=(amount*20)/100;
		amount-=discount;
		cout << "Your total amount is " << amount;
	}
	else if(amount>10000){
		discount=(amount*25)/100;
		amount-=discount;
		cout << "Your total amount is " << amount;
	}
    else{
        cout << "Invalid amount";
    }
	
	return 0;
}