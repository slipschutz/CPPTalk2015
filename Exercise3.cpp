





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


/***This function is WRONG.  It will have unpredicatable behavoir
    (Probably will segfualt)

 ***/
int CalculateTrace2(int **TheMatrix,int rows,int columns){
  
  cout<<"In CalculateTrace2 &TheMatrix[0][0]="<<&TheMatrix[0][0]<<endl;///Won't give result inside of the array

  int temp=0;
  for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
      if (i==j){
	temp=temp+TheMatrix[i][j]; //Will cause segfault!!!!!!!!!!!!!!!!!!!!
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


  //Call the function to calculate the trace
  int trace =CalculateTrace(My2DArray,3,3);//Here the Array is passed explictly and works
  cout<<"The trace value from CalulateTrace is "<<trace<<endl<<endl<<endl;
  
  cout<<"First Adrees of My2DArray "<<&My2DArray[0][0]<<"  Last Adress "<<&My2DArray[2][2]<<endl;
  trace=CalculateTrace2((int**)My2DArray,3,3);


  /****************************Question 1*********************
   * Write a new version of the CalculateTrace Function that takes a 1-D array, number of columns, number of rows 
   * as arguments and calculates the trace
   */


  return 0;
}
