#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{
  int height;
  int width;
  int length;
}box1, box2;
 

 
int main() {


    int totalVolume;
      
    cout<<"Enter Box 1 height : ";
    cin>>box1.height;
    cout<<"Enter Box 1 width : ";
    cin>>box1.width;
    cout<<"Enter Box 1 length : ";
    cin>>box1.length;

    cout<<"Enter Box 2 height : ";
    cin>>box2.height;
    cout<<"Enter Box 2 width : ";
    cin>>box2.width;
    cout<<"Enter Box 2 length : ";
    cin>>box2.length;

    

    
     
    totalVolume = volume(box1.height ,box1.length ,box1.width )
             + volume( box2.height,box2.length ,box2.width );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

int volume (int height, int width, int length){
  return height*length*width;
} 
