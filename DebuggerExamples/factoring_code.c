#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

//---------------------------------------------
void PrintArray(int* array, size_t size) {
  for(int i=0; i<size; i++) {
    cout << array[i] << " ";
  } cout << endl;
}
//---------------------------------------------
void AllocateAndSet(int* array, int val, size_t size) {
  array = (int*)malloc(size*sizeof(int));
  for (int i=0;i<size;i++) {
    array[i] = val;
  }
}

//=============================================

int main() {  
  int set_value = 10;
  size_t size = 5;

  int* arrayA = (int*) malloc(size*sizeof(int));
  for (int i=0;i<size;i++) {
    arrayA[i]=set_value;
  }
  PrintArray(arrayA,size);
  
  
  int* arrayB;
  AllocateAndSet(arrayB,set_value,size);
  PrintArray(arrayB,size);
  
  return 0;
}

//=============================================

