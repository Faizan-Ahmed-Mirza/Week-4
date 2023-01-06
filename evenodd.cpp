#include<iostream>
using namespace std;

void evenodd(int num1){
   int remainder;
   remainder = num1/2;
   if(remainder*2 == num1){
	cout <<"Number is even!" << endl ;
     }
   if(remainder*2 != num1){
	cout <<"Number is odd!" << endl ;
     }
 }

main(){
  int num1;
  while(true){
  	cout <<"enter the number" <<endl;
  	cin >> num1; 
  	evenodd(num1);
     }

}