





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
  
  
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<My2DArray[i][j]<<" ";
    }
    cout<<endl;
  }

  /*****************************Question one*****************
    How can you calculate the trace of the matrix represented
    by the 2-D Array?
  */
  
  int trace=0;
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      if (i==j){
	trace=trace+My2DArray[i][j];
      }
    }
  }
  cout<<"The Trace is "<<trace<<endl;


  cout<<endl<<endl;
  /*****************************Question two*****************
      What number will this print cout<<My2DArray[0][8]<<endl;
      And why does it work?
  */

  cout<<"My2DArray[0][8] will print out "<<My2DArray[0][8]<<endl;
  /***
      This works because like the 1-D Array the 2-D Array is just a 
      memory address and the [0][8] operators are just a notation for
      how many steps  after the start of the array you should go.
      [2][1] means go two rows of three long and then move one more
      spot over. So it should print 8 in our example. The [] operators
      don't know anything about the size of your matrix, they just 
      move over a number of memory addresses
      
   */

  cout<<endl<<endl;
  int *My1DArray=My2DArray[0];

  cout<<"My2DArray "<<My2DArray<<"\nMy2DArray[0]  "<<My2DArray[0]
      <<"\n&My2DArray[0][0]  "<<&My2DArray[0][0]<<"\nMy1DArray  "<<My1DArray<<endl;



  cout<<endl<<endl;
  /*****************************Question Three*****************
      How can you calculate the trace of the above matrix but using the
      My1DArray pointer instead?
  */

  trace=0;
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      if (i==j){
	trace=trace+My1DArray[i*3+j];
      }
    }
  }

  cout<<"The trace is "<<trace<<endl;

   
  return 0;
}
