#include <iostream>
#include <vector>

using namespace std;

int main(){
   // vector <char> vowels; empty
   // vector <char> vowels (5);// 5 initialized to zero
    vector <char> vowels {'a', 'o', 'i'};
    
    cout << vowels [0] << endl;
    cout << vowels [3] << endl; //nonsense
    
  //  vector <int> test_scores (3,100); // 3 elements are assigned to 100
    vector <int> test_scores {100, 20, 30};
    
    cout << "Test scores:" << endl; //this is using array syntax
    cout << test_scores [0] << endl;
     cout << test_scores [1] << endl;
      cout << test_scores [2] << endl;
      
       cout << "Test scores using vector syntax:" << endl; //this is using vector syntax
    cout << test_scores.at(0) << endl;
     cout << test_scores.at(1) << endl;
      cout << test_scores.at(2) << endl;
      cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
      
      cout << "\nEnter 3 test scores:" << endl;
      cin >> test_scores.at(0);
      cin >> test_scores.at(1);
      cin >> test_scores.at(2);
      
       cout << "\nUpdated scores:" << endl;
       cout << test_scores.at(0) << endl;
       cout << test_scores.at(1) << endl;
       cout << test_scores.at(2) << endl;
       
       int score_to_add {0};
       cout << "\nEnter one more number:" << endl;
       
       cin >> score_to_add;
       
       test_scores.push_back(score_to_add);
       
        cout << "\nUpdated scores again with an additional number:" << endl;
       cout << test_scores.at(0) << endl;
       cout << test_scores.at(1) << endl;
       cout << test_scores.at(2) << endl;
       cout << test_scores.at(3) << endl;
       
       cout << "\nThere are " << test_scores.size() << " scores in the vector now" << endl;
       
       vector <vector<int>> movie_ratings //
       {
           {1,2,3,4},
           {1,2,4,5},
           {3,3,4,5}
       };
       
       cout << "\nSecond row and third column would be: " << endl;
       cout << movie_ratings [1][2] << endl;
    return 0;
    }