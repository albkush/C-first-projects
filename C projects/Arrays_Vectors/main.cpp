#include <iostream>
//Arrays are written in square brackets [] 
using namespace std;

int main(){
 char vowels[] {'a', 'e', 'o'};
 cout << "The first vowel is: " << vowels[0] << endl;
 cout << "The last one is: " << vowels[2] << endl;
 
 int test_scores [5] {100, 90};
 
 cout << "\nFirst score: " << test_scores [0] << endl;
  cout << "Second score: " << test_scores [1] << endl;
   cout << "Third score: " << test_scores [2] << endl;
    cout << "Fourth score: " << test_scores [3] << endl;
     cout << "Fifth score: " << test_scores [4] << endl;
     cout << "Sixth score: " << test_scores [5] << endl; //junk numbers because it was not specified with the int
     
     cout << "\nEnter five scores: ";
     cin >> test_scores [0];
     cin >> test_scores [1];
     cin >> test_scores [2];
     cin >> test_scores [3];
     cin >> test_scores [4];
     
     cout << "\nThe updated array is: " << endl;
     cout << "First score: " << test_scores [0] << endl;
  cout << "Second score: " << test_scores [1] << endl;
   cout << "Third score: " << test_scores [2] << endl;
    cout << "Fourth score: " << test_scores [3] << endl;
     cout << "Fifth score: " << test_scores [4] << endl;
     
     cout << "\nWhat the value of the array is: " << test_scores << endl; //it says where it is located
     
     // int arr[10] {};
    //arr[0] = 100;
   // arr[9] = 1000;
   //In this case we assign all the numbers to 0 but then we assign the first one and the last one to 100 and 1000
     
    return 0;
    }