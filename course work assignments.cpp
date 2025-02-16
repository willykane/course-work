/* a simple program to show elligiblity of voters to vote by age 

 AUTHOR:WILLYCE OJWANG GWARA 
 REG NO: BSE-05-0044/2024  */

#include <iostream>
using namespace std;
#include <string>

 int main() {
 string name ;
 int age ;

  //prompt user to enter their name //
  
 cout<<"enter your full name"<<endl;

 getline(cin ,name);

// prompt user to enter age //
  
 cout<<"enter your age:"<<endl;
 cin>>age;

  //check users elligibility//
  
 if  (age>=18) {
    cout<<"eligible to vote";
 }
else {
        cout<<"not eligible to vote";

}
 return 0;}

