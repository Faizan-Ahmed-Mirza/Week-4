#include<iostream>
using namespace std ;

void check(string day , int price){
   if(day == "sunday"){
         int realprice ;
         realprice = price - 10*price/100;
         cout << "Your total payable is : " << realprice << endl;
      }
   if(day != "sunday"){
         cout << "Your total payable is : " << price << endl;
      }

}

main(){
  string day ;
  int price ;
  while(true){
  	cout << "Enter the purchase price : " << endl;
  	cin >> price ;
  	cout <<"Enter the day : " << endl ;
  	cin >> day ;
  	check(day , price) ; cout << endl << endl;
     }

}