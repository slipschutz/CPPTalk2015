

#include <iostream>
#include <vector>
using namespace std;



void Print(vector<int> & thing){
  
  //C++ 11 feature (Range based for loops)
  //will just loop over everything in "thing"
  //you don't need to specify how big it is
  for (auto i : thing){
    cout<<i<<" ";
  }
  cout<<endl;

}



int main(){
  
  //Declare a vector of ints
  //The great thing about vectors is that
  //you don't need to specify a size
  //they are RESIZABLE
  //
  //They are C++ version of C arrays
  //
  // the <int> notation is specifying a 
  // "template parameter"
  // the vector class is written in such a
  //way that you can make a vector of 
  //ANYTHING!!!!
  vector <int> MyFirstVector;

  
  //Ways to set values in a vector

  //OPTION 1 'Pushing' on the vector

  for (int i=0;i<10;i++){
    MyFirstVector.push_back(i);
  }
  
  Print(MyFirstVector);


  //Option two resizing and explictly assinging
  
  MyFirstVector.resize(3);

  MyFirstVector[0]=10;
  MyFirstVector[1]=20;
  MyFirstVector[2]=990;

  
  Print(MyFirstVector);


  return 0;
}
