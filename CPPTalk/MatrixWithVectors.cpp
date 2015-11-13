




#include <iostream>
#include <vector>
using namespace std;


void Print(vector<vector<int> > & thing){
  
  //C++ 11 feature (Range based for loops)
  //will just loop over everything in "thing"
  //you don't need to specify how big it is
  for (auto  i : thing){
    for (auto j : i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  cout<<endl;

}






int main(){

  
  //you can make vectors of vectors 
  //to represent a matrix
  vector < vector <int > > MyMatrix ={ {1,2,3},{4,5,6},{7,8,9}};

  Print(MyMatrix);



  /********************Question 1******************************
     What will MyMatrix[0][0] do?
     Uncomment below to find out
  ***/
  //cout<<MyMatrix[0][0]<<endl;


  /********************Question 2******************************
     What will MyMatrix[0][8] do?
     Uncomment below to find out
  ***/
  //cout<<MyMatrix[0][8]<<endl;



  /********************Question 3******************************
     What will MyMatrix.at(0).at(1000) do?
     Uncomment below to find out
     
     NOTE:  Won't work on cpp.sh
     But Does work on tutorials point.com

  ***/
  
  //cout<<MyMatrix.at(0).at(1000)<<endl;


 

  /******************Question 4*************************
     Write a function that takes MyMatrix as an argument and returns the 
     trace.
   */////


  return 0;
}
