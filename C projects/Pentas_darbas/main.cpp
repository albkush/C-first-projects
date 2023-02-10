#include <iostream>
//using the program to calculate the area of the room in sqaure feet
using namespace std;

int main(){
    int room_width;
    int room_length;
    
    cout <<"Enter the lenght and the width of the room: "<< endl;
    cin >> room_length >> room_width;
    
    cout <<"Room's area is: " << room_length * room_width << " sqaure feet." << endl;
    
    return 0;
    
    }