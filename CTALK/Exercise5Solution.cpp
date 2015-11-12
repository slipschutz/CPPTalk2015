



////////////////////////////////////////////////////////////////////////
// This code has 3 Errors in it.  It should segfault when run	      //
// When working correctly the code should allocate a 4x4 matrix	      //
// initialize the values to 0-15				      //
// Calculate the trace of the matrix				      //
// 								      //
// Move the matrix to a different location in memory with a different //
// name and then recalculate the trace (which should be the same)     //
////////////////////////////////////////////////////////////////////////




#include <iostream>
#include <stdio.h>


#include <stdlib.h> /////!!!!!!!!!!!!!!new Header file in this example needed for malloc
using namespace std;



void DeAllocateMatrix(int ** Matrix,int nRows,int nColumns){

  for (int i=0;i<nColumns;i++){
    free(Matrix[i]);
  }
  free(Matrix);

}

///////////////////////////|////////////////////////////////////////////////////////////
///////////////////////////v////////////////////////////////////////////////////////////
void AllocateMatrix(int ** &  Matrix,int nRows,int nColumns){

  Matrix = (int**)malloc(nRows*sizeof(int*));

  for (int i=0;i<nColumns;i++){
    Matrix[i]=(int*)malloc(nColumns*sizeof(int));
  }
  
}


void InitializeMatrix(int ** Matrix,int nRows,int nColumns){
  int count=0;
  for (int i=0;i<nRows;i++){
    for (int j=0;j<nColumns;j++){
      Matrix[i][j]=count;
      count++;
    }
  }
}

void PrintMatrix(int ** Matrix,int nRows, int nColumns){
  
  for (int i=0;i<nRows;i++){
    for (int j=0;j<nColumns;j++){
      printf("%4d ",Matrix[i][j]);
     }
    cout<<endl;
  }
}


//////////////////////////////////////////|/////////////////////////////////////////////
//////////////////////////////////////////v/////////////////////////////////////////////
void MoveMatrix (int ** MatrixOld, int ** & MatrixNew, int nRows, int nColumns){

  if (MatrixNew ==NULL){
    AllocateMatrix(MatrixNew,nRows,nColumns);
  }
  
  for (int i=0;i<nRows;i++){
    for (int j=0;j<nColumns;j++){
      /////////////|//////////////////////////////////////////////////////////////////////////
      /////////////v//////////////////////////////////////////////////////////////////////////
      MatrixNew[i][j]=MatrixOld[i][j];
    }
  }
  
  DeAllocateMatrix(MatrixOld,nRows,nColumns);

}



int GetTraceOfMatrix(int ** Matrix,int nRows,int nColumns){
  int trace =0;
  for (int i=0;i<nRows;i++){
    for (int j=0;j<nColumns;j++){
      if (i==j){
	trace=trace+Matrix[i][j];
      }
    }
  }
  return trace;
}

int main(){
  

  int ** TheMatrix=NULL;

    
  AllocateMatrix(TheMatrix,4,4);
  InitializeMatrix(TheMatrix,4,4);
  cout<<"TheMatrix is "<<endl;
  PrintMatrix(TheMatrix,4,4);

  cout<<"The Trace is "<<GetTraceOfMatrix(TheMatrix,4,4)<<endl;

  int ** NewMatrix=NULL;
  
  MoveMatrix(TheMatrix,NewMatrix,4,4);
  
  cout<<"The Trace of NewMatrix is "<<GetTraceOfMatrix(NewMatrix,4,4)<<endl;


  DeAllocateMatrix(NewMatrix,4,4);
  DeAllocateMatrix(TheMatrix,4,4);

  
  return 0;
}
