#include <iostream>
//this is a comment

/* multiple 
 * line 
 * comment */
 
 using namespace std;
 
int main(){
    int favorite_number;
    int num1;
    int num2; //whole number
    double num3; //realusis skaicius
    int age = 21;
    
    cout << age << endl;
   cout <<"Enter your favorite number between 1 and 100:"<< endl;
    cin >> favorite_number;
    cout << "hallo\ninn\nTata\n";
    cout <<"That's my favorite number too!"<< endl;
    cout <<"No really!! " << favorite_number << " is my favorite number."<< endl;
    
    cout << "Enter two numbers with space: " << endl;
    cin >> num1 >> num2;
    cout << "You have entered " << num1 << " and " << num2 << endl;
    cout << "Type a real number: " << endl;
    cin >> num3;
     cout << "You have entered " << num3 << endl;
    return 0;
    }