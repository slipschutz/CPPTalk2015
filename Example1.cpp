





#include <iostream>
#include <stdio.h>
using namespace std;


void PrintSpacerLine(char c){
  
  for (int i=0;i<60;i++){
    printf("%c",c);
  }
  printf("\n");
}



int main(){
  

  cout<<endl<<endl;


  //Look Mom an Integer!!!!
  int thisIsAInt=10;

  cout<<"The Value of thisIsAInt "<<thisIsAInt<<endl;
  cout<<"The Memory Address of thisIsAInt "<<&thisIsAInt<<endl;
  

  cout<<endl<<endl;



  //And now we make a pointer
  int * aPointerToThisIsAInt = &thisIsAInt;
  
  //The value of the pointer should be the Memory Address of the thing that it
  //Points to IE the integer "thisIsAInt"
  cout<<"The Value of aPointerToThisIsAInt "<<aPointerToThisIsAInt<<endl;
  
  //Now what about the Address of the pointer????
  //It should just be some random address that has no meaning
  //The important address for the pointer is adress it holds as its VALUE
  cout<<"The Address of aPointerToThisIsAInt "<<&aPointerToThisIsAInt<<endl;


  cout<<endl<<endl;

  //Unlike the Integer itself the pointer can also be "De-Referenced"
  cout<<"What is *aPointerToThisIsAInt "<<*aPointerToThisIsAInt<<endl;
  

  return 0;
}
