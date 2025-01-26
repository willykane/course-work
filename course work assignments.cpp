#include <iostream>
using namespace std;
#include <string>

 int main() {
 string name ;
 int age ;

 cout<<"enter your full name"<<endl;

 getline(cin ,name);

 cout<<"enter your age:"<<endl;
 cin>>age;

 if  (age>=18) {
    cout<<"eligible to vote";
 }
else {
        cout<<"not eligible to vote";

}
 return 0;}

