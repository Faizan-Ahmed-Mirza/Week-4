#include<iostream>
using namespace std;

void compare(int num1 , int num2){
  int result ;
  result = num1 - num2 ;
  if(result >=0 ){
      cout <<" 1st number is greater" << endl;
   }
  if(result < 0){
      cout <<" 2st number is greater" << endl;
   }
}

main(){
  int num1 ;
  int num2 ;
  cout << "enter the 1st number" << endl;
  cin >> num1 ;
  cout << "enter the 2st number" << endl;
  cin >> num2 ;
  compare(num1 , num2) ;

}