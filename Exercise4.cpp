





#include <iostream>
#include <stdio.h>


#include <stdlib.h> /////!!!!!!!!!!!!!!new Header file in this example needed for malloc
using namespace std;


void PrintSpacerLine(char c){
  
  for (int i=0;i<60;i++){
    printf("%c",c);
  }
  printf("\n");
}



/*
  To Pass a Multi demensional array explictly you need
  to specify the size of all demensions except the first
  WHY?
  if you say TheMatrix[1][1] the complier needs to know how
  to calculate the total number of spaces away from the 
  beginning of the array.
  if the Matrix is 3X1000
  TheMatrix[1][1] will be at a very different memory address
  than if it was 3X3

****/

int CalculateTrace(int TheMatrix[][3],int rows,int columns){
  int temp=0;
  for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
      if (i==j){
	temp=temp+TheMatrix[i][j];
      }
    }
  }
  return temp;
}





int main(){
  

  
  /*
    Declare a 2-D array in the same way as the 1-D array
    but with two sets of [][] brackets instead of 1
    In C with multi dimensional arrays you have to
    specify the size of each dimension except the first

  **/
  int My2DArray[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  
  //Print the martrix
  cout<<"The matrix is "<<endl;
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<My2DArray[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl<<endl;

  //Let's make a dynamically allocated 2-D Array in C
  //First it is an array of pointers (which will be arrays)
  int ** DynamicallyAllocatedMatrix = (int**)malloc(3*sizeof(int*));
  
  for (int i=0;i<3;i++){
    //Now for each pointer in the array of pointers allocate an
    //    array of integers
    DynamicallyAllocatedMatrix[i]=(int*)malloc(3*sizeof(int));
  }

  //Copy the values from My2DArray into the new Dynamically Allocated 
  //Array
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      DynamicallyAllocatedMatrix[i][j]=My2DArray[i][j];
    }
  }

  ///Lets Make sure we have the same matrix
  cout<<"Dynamically allocated Matrix"<<endl;
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<DynamicallyAllocatedMatrix[i][j]<<" ";
    }
    cout<<endl;
  }

  /*********************Question 1***********
   * Using the dynamically allocated matrix can you make a function that takes a
   * int ** , the number of rows and the number of columns as the argument and 
   * calcuate the trace?
   */

  /********************Question 2************
   *How can we deallocate the memory that was allocated for the
   *Dynamically allocated matrix
   */


  return 0;
}
