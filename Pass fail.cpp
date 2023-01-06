#include<iostream>
using namespace std;

void percentage(int marks){
	int num = marks ;
	cout << "Your Percentage is :" << num*100/200 << endl;
}
main(){
   while(true){
	int marks ;
	cout << " Enter your marks : " << endl ;
	cin >> marks ;
	if (marks > 50){
		cout << "You have passsed 1st Quiz of PF!" <<endl;
	}
	if (marks == 50){
		cout << "Your marks are 50." << endl;
	}
	if (marks < 50){
		cout << "Better luck next time!" << endl;
	}
	percentage(marks) ; cout << endl << endl ;
   }

}