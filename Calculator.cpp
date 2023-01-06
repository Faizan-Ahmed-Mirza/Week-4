#include<iostream>
using namespace std ;

void multiply(int n1 , int n2){
	cout << "Product is : " << n1 * n2 << endl;}
void add(int n1 , int n2){
	cout << "Sum is : " << n1 + n2 << endl;}
void subtract(int n1 , int n2){
	cout << "Differnce w.r.t 1st number is : " << n1 - n2 << endl;}
void divide(int n1 , int n2){
	cout << "The 1st number divided by 2nd gives : " << n1/n2 <<endl;}


main(){
	int num1 ;
	int num2;
	char operation ;
	while(true){
        	cout << "enter 1st numer : " << endl;
		cin >> num1 ;
		cout << "enter 2nd number : " << endl;
		cin >> num2 ;
		cout << "enter the operation symbol : " << endl;
		cin >> operation ;
		if(operation == '+'){
			add(num1 , num2) ;
	    	  }
		if(operation == '-'){
			subtract(num1 ,num2) ;
	    	  }
		if(operation == '*'){
			multiply(num1 , num2) ;
	    	  }
		if(operation == '/'){
			divide(num1 , num2);
	   	  }
           }
}