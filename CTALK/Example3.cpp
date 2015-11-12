





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

  //Let's declare an ARRAY
  int MyCArray[4];  //<--- Easy Right????

  //Set the values of the array
  MyCArray[0]=55;
  MyCArray[1]=1;
  MyCArray[2]=8835;
  MyCArray[3]=3;

  
  for (int i=0;i<4;i++){
    cout<<"MyCArray["<<i<<"]   =   "<<MyCArray[i]<<endl;
  }


  cout<<endl<<endl;  

  int MyEasierArray[]={1,6,3,8};

  for (int i=0;i<4;i++){
    cout<<"MyEasierArray["<<i<<"]   =   "<<MyEasierArray[i]<<endl;
  }

  cout<<endl<<endl;

  /*The point of graetest CONFUSION
    WHAT ARE ARRAYS???
    ARRAYS = POINTERS in c
  */


  cout<<endl<<endl;
  int * PointerToAnInt =MyEasierArray;

  for (int i=0;i<4;i++){
    cout<<"PointerToAnInt["<<i<<"]   =   "<<PointerToAnInt[i]<<endl;

  }
  cout<<endl<<endl;

  return 0;
}
