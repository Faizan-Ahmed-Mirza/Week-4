#include<iostream>
using namespace std;

void entrance(int age){
  if(age >= 18){
	cout <<"YOu are allowed to Vote!" << endl;
     }
  if(age < 18){
	cout <<"You are not allowed to Vote." << endl;
     }
}
main(){
  int age;
  while(true){
     cout << "Enter your age : " << endl;
     cin >> age ;
     entrance(age); cout << endl << endl ;
   }
}