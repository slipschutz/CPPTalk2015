



#include <iostream>
using namespace std;


//Here num is being passed by "reference"
//Changes in the function SHOULD change the value in the calling
//Function
void FunctionReference (int & num){
  cout<<"The Address of num in FunctionReference  "<<&num<<endl;
  num=-100;
}

//Here num is being passes as a copy.  Changes in the function
//Should NOT persit in the calling function
void FunctionCopy (int num){
  cout<<"The Address of num in FunctionCopy       "<<&num<<endl;
  num=20;
}


int main(){
  
  //Make an integer
  int num=10;
  //Like everything it has an address 
  cout<<"The Address of num in main               "<<&num<<endl;
  
  //print the value of the integer before we do anything
  cout<<"Num Before copy call "<<num<<endl;
  FunctionCopy(num);

  //The value shouldn't have changed 
  cout<<"Num After copy call "<<num<<endl;
  FunctionReference(num);
  //The value should have changed
  cout<<"Num After Reference call "<<num<<endl;

  cout<<endl<<endl<<endl;

  
  /*The Reference syntax is not special to function parameters 
   * You can make a reference to something and it will behave as
   * if you made a pointer to it and changed the value of the thing
   * the pointer points at
   */

  int OtherNum = 20;

  int & ReferenceToOtherNum=OtherNum;
  
  cout<<"Other Num is "<<OtherNum<<endl;
  cout<<"ReferenceToOtherNumNum is "<<ReferenceToOtherNum<<endl;

  ReferenceToOtherNum=9;
  cout<<"________________________"<<endl;
  cout<<"Other Num is "<<OtherNum<<endl;
  cout<<"ReferenceToOtherNumNum is "<<ReferenceToOtherNum<<endl;

  
}
