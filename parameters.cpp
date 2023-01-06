#include<iostream>
using namespace std ;

void add(int n1 , int n2){
	cout << "Sum is : " << n1 + n2 << endl;
}

main(){
	int num1 ;
	int num2;
        cout << "enter 1st numer : " << endl;
	cin >> num1 ;
	cout << "enter 2nd number : " << endl;
	cin >> num2 ;
	add(num1 , num2) ;

}