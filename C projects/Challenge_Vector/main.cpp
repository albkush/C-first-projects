#include <iostream>
#include <vector>

using namespace std;

int main(){
   vector <int> vector1;
   vector <int> vector2;
   
   vector1.push_back(10);
   vector1.push_back(20);
   vector2.push_back(100);
   vector2.push_back(200);
   
   cout << "\nVector nr1 values: " << endl;
   cout << vector1.at(0) << endl;
   cout << vector1.at(1) << endl;
   
   cout << "\nThere are " << vector1.size() << " scores in the vector nr1 now" << endl;
   
   cout << "\nVector nr2 values: " << endl;
   cout << vector2.at(0) << endl;
   cout << vector2.at(1) << endl;
   
   cout << "\nThere are " << vector2.size() << " scores in the vector nr2 now" << endl;
   
   vector <vector<int>> vector_2d;
   
   vector_2d.push_back(vector1);
   vector_2d.push_back(vector2);
   
   cout <<"\nElements of the 2D vector: " << endl;
   cout << vector_2d [0][0] << endl;
   cout << vector_2d [0][1] << endl;
   cout << vector_2d [1][0] << endl;
   cout << vector_2d [1][1] << endl;
   
   vector1.at(0) = 1000;
   
      cout <<"\nElements of the 2D vector updated: " << endl;
   cout << vector_2d [0][0] << endl;
   cout << vector_2d [0][1] << endl;
   cout << vector_2d [1][0] << endl;
   cout << vector_2d [1][1] << endl;
   
   cout <<  vector1.at(0);
   
    return 0;
    }