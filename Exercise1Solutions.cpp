





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

  
  int MyEasierArray[]={1,6,3,8};

  for (int i=0;i<4;i++){
    cout<<"MyEasierArray["<<i<<"]   =   "<<MyEasierArray[i]<<endl;
  }

  cout<<endl<<endl;

  /********************************Question ONE******************************
    What do you think the expression:
    
    3[MyEasierArray] 

    will do?  Will it even compile??
    Uncomment below to find out
  */

  
  cout<<endl<<endl;
  for (int i=0;i<4;i++){
    cout<<i<<"[MyEasierArray]   =   "<<i[MyEasierArray]<<endl;
  }
  cout<<endl<<endl;

  /********Question One Answer****************************************
	   Yes it does compile
	   
	   When you say array[5] it takes the address of the array (say 1004)
	   and moves 5 address over (address 1009) and dereferences the pointer
	   gving you the 5 element of the array
	   
	   Saying 5[array] means it takes the address of 5 (which is 5) and 
	   moves over 1004 spaces (arriving again at 1009) and then derefences
	   the pointer giving you the 5th element of the array
  ***/


  /*And now yet ANOTHER way to refer to the elements of an array
    
   */

  cout<<endl<<endl;

  int * PointerToArray =MyEasierArray;
  for (int i=0;i<4;i++){
    cout<<"*(PointerToArray+"<<i<<")   =   "<< *(PointerToArray+i)<<endl;
  }
  cout<<endl<<endl;
  
  /*****************************Question TWO**************************
    Print the Address off the first element of MyEasierArray and the
    Address of the Array.  Are they same?
  */
  

  
  /****************************Question Two Answer******************/
  /*
    Yes they are the same.  The Address of the first element of
    the array IS the array.  
  */
  cout<<"They are the same "<<&MyEasierArray[0]<<"   =    "<<MyEasierArray<<endl;

  return 0;
}
