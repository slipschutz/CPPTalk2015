





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

  //Decleare a simply 1-D array
  //In C when you declar an array the length
  //of the first dimensions can be ignored 
  int MyEasierArray[]={1,6,3,8};


  //Print out the values of the array
  for (int i=0;i<4;i++){
    cout<<"MyEasierArray["<<i<<"]   =   "<<MyEasierArray[i]<<endl;
  }

  cout<<endl<<endl;

 


  /*In additon to printing the values of the array like
    array[index] 
    
    you can also explictly get the pointer that defines the array
    and then increment the pointer to the spot you want and dereference 
    the pointer to get the value

    After all that is what happens when you use the notation 
    array[index]
    
   */
  cout<<endl<<endl;

  int * PointerToArray =MyEasierArray;
  for (int i=0;i<4;i++){
    cout<<"*(PointerToArray+"<<i<<")   =   "<< *(PointerToArray+i)<<endl;
  }
  cout<<endl<<endl;
 

 /********************************Question ONE******************************
    What do you think the expression:
    
    3[MyEasierArray] 

    will do?  Will it even compile??
    Uncomment below to find out
  */

  cout<<endl<<endl;
  /*
    for (int i=0;i<4;i++){
    cout<<i<<"[MyEasierArray]   =   "<<i[MyEasierArray]<<endl;
  }
  */

 
  /*****************************Question TWO**************************
    Print the Address off the first element of MyEasierArray and the
    Address of the Array.  Are they same?
  */
  

  return 0;
}
