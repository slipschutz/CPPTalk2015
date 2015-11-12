





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


  //And now we make a pointer
  int * aPointerToThisIsAInt = &thisIsAInt;

  //We can make Pointers to Pointers.
  int ** aPointerToAPointer = &aPointerToThisIsAInt;

  
  //The pointer to "aPointerToThisIsAInt" should contain the address of "aPointerToThisIsAInt"
  cout<<"Value of aPointerToAPointer="<<aPointerToAPointer<<" Address of aPointerToThisIsAInt "<<&aPointerToThisIsAInt<<endl;

  //Dereferencing the pointerToAPointer should give the address of pointer
  cout<<"*aPointerToAPointer="<<*aPointerToAPointer<<" Value of  aPointerToThisIsAInt "<<aPointerToThisIsAInt<<endl;
  
  //We can deference the pointerToAPointer twice and get back the original INT
  cout<<"**aPointerToAPointer="<<**aPointerToAPointer<<endl;

  cout<<endl<<endl;



  /********************************************************************************
    Let's think about TYPES 
   
    C++ has strict TYPES
    thisIsAInt has TYPE Int
    aPointerToThisIsAInt has TYPE Int*
    aPointerToAPointer has TYPE Int**
    
    the Complier will complain if you try and compare int* and int** 
    even though they are both just memory addresses.

    
    //For instance the following line wouold give an error
    //Becuase the two variables have different TYPES
    //This is normally a good thing and prevents you from coding something
    //That doesn't make any sense
    if (aPointerToAPointer == aPointerToThisIsAInt){
    
    }

    But if YOU think you know better than the compiler you can CAST

    casting in C and C++ allows you to tell the compiler you really
    want something to be a different type.  It will listen to you even 
    if what you ask makes no sense

    There are 5 diffrent types of casts and each has their own syntax 
    Here we consider only a "c style cast"
    
    a "c style cast" looks like:
    
    (typeYouWant)thingYouWantToCast
    
  *********************************************************************************/
 
  //With a cast we can compare then int* and the int**
  if ((int*)aPointerToAPointer != aPointerToThisIsAInt){
    cout<<"The value of a  aPointerToAPointer is not equal to the value of aPointerToThisIsAInt"<<endl; 
  }

  cout<<endl<<endl;



  return 0;
}
