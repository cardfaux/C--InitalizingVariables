#include <iostream>

using namespace std;

// This Program Will Calculate The Area of a Room In Square Feet

int main() {
    
    int room_width {0};
    int room_length {0};
    cout <<"Enter The Width Of The Room: ";
    cin >> room_width;
    
    cout << "Enter The Length of The Room: ";
    cin >> room_length;
    
    cout << "The Area of The Room is " << room_width * room_length << " Square Feet" << endl;
    
    return 0;
}
