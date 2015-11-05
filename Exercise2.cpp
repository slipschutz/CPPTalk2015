





#include <iostream>
#include <stdio.h>
using namespace std;


void PrintSpacerLine(char c){
  
  for (int i=0;i<60;i++){
    printf("%c",c);
  }
  printf("\n");
}



/*
  Now the fun begins 
  2-D C Arrays

 */

int main(){
  
  cout<<endl<<endl;
  
  /*
    Declare a 2-D array in the same way as the 1-D array
    but with two sets of [][] brackets instead of 1
    In C with multi dimensional arrays you have to
    specify the size of each dimension except the first

  **/
  int My2DArray[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  cout<<"This is the Matrix"<<endl;
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<My2DArray[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl<<endl;
  /*****************************Question one*****************
    How can you calculate the trace of the matrix represented
    by the 2-D Array?
  */




  /*****************************Question two*****************
      What number will this print cout<<My2DArray[0][8]<<endl;
      And why does it work?
  */


  cout<<endl<<endl;
  
  

  /*Below are all the different combinations of getting the address of the 2Darray
    They all are the same thing

    Like the 1 D array a 2D array is just a memory address.  
    
  **/
  int *My1DArray=My2DArray[0];  

  cout<<"My2DArray        "<<My2DArray<<"\nMy2DArray[0]     "<<My2DArray[0]
      <<"\n&My2DArray[0][0]  "<<&My2DArray[0][0]<<"\nMy1DArray         "<<My1DArray<<endl;



  cout<<endl<<endl;

  /*****************************Question Three*****************
      How can you calculate the trace of the above matrix but using the
      My1DArray pointer instead?
  */
  

  return 0;
}
