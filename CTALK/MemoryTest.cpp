





#include <iostream>
#include <stdio.h>


#include <stdlib.h> /////!!!!!!!!!!!!!!new Header file in this example needed for malloc
using namespace std;




int main(){


  int size = 1000;

  while (true){

    //Let's make a dynamically allocated 2-D Array in C
    //First it is an array of pointers (which will be arrays)
    int ** DynamicallyAllocatedMatrix = (int**)malloc(size*sizeof(int*));
  
    for (int i=0;i<size;i++){
      //Now for each pointer in the array of pointers allocate an
      //    array of integers
      DynamicallyAllocatedMatrix[i]=(int*)malloc(size*sizeof(int));
    }

    ///Now deallocate the arrays
    for (int i=0;i<size;i++){
      //Now for each pointer in the array of pointers allocate an
      //    array of integers
      free(DynamicallyAllocatedMatrix[i]);
    }
    free(DynamicallyAllocatedMatrix);

  }


  return 0;
}
