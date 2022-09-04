#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
struct Box{
  float heigth;
  float width;
  float length;
};
// have the integer data types Height, Width, Length
int volume(Box b);

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
  struct Box box1;
    // 3. Create a variable called box2 of the Box structure type
  struct Box box2;  
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Height of Box 1;
    cout << "Enter Box 1 Width : ";
    cin >> Width of Box 1;
    cout << "Enter Box 1 Length : ";
    cin >> Length of Box 1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Height of Box 2;
    cout << "Enter Box 2 Width : ";
    cin >> Width of Box 2;
    cout << "Enter Box 2 Length : ";
    cin >> Length of Box 2;
    
    // 5. Replace the coding below to pass the Box type structure
  int totalVolume = volume(box1) + volume(box2);
 
  cout<<"The volume of the box " <<totalVolume<<endl;
    
    return 0;
}

// Implement the functions here
int volume(Box b)
{
  return b.heigth * b.width * b.length;
}