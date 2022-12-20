#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
   string name;
   int id;
   string movie;
   string day;
   string quote;
  

cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
getline(cin,name);
cout << "Fahsai: Wow!!!" << " " << name << " " << "is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student." << " " << "What is your student ID?\n";
cin >> id;
cin.ignore();
cout << name << ": ";
 int gear = (id/pow(10,7))-12;
cout << "Fahsai: I think you may be GEAR" << " " << gear << "." << " " <<  "I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";

cout << name << ": ";
getline(cin, movie);

cout << "Fahsai: So....which day are you free to go with me?\n";

cout << name << ": " ;
getline(cin,day);

cout << "Fahsai:" << " " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
cout << name << ":" << " " << quote;
cout << "Fahsai: 555+ see you " << day << "." << " " << "Bye Bye \\(^ ^)/";
}