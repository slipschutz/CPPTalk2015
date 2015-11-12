



#include <iostream>
#include <stdlib.h>
using namespace std;


//Try each of the follwing loops by uncommenting them and commenting out the 
//Previous ones

int main(){
  
  int size=100000;




  //Loop1
  //No memory leak
  for (int i=0;i<1000000;i++){
    int array[size];
  }



  //Loop2
  //Memory Leak
  /*
  for (int i=0;i<1000000;i++){
    int array[size];
    int * dynamicArray = (int*)malloc(size*sizeof(int));
  }
  */

  /*
  //Loop3
  //No Memory Leak
  for (int i=0;i<1000000;i++){
    int array[size];
    int * dynamicArray = (int*)malloc(size*sizeof(int));

    free(dynamicArray);
  }
  */

  
  return 0;
  
}
