/* Program to compute Pi using Monte Carlo methods */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>

//----------------------------------------------------------
double GetPiConstant() {

  unsigned char arr[256];  
  float pi=0;
  unsigned char* heap = (unsigned char*)"\xDB\x0F\x49\x40";
  memcpy(arr,heap,4);
  pi = *(float*)arr;
  memset(arr, 100, 256);
  return pi;
}

//----------------------------------------------------------
double CalculatePi(int niterations) {

  srand(35793641);  // seed random numbers
  int count,i=0;
  for (i=0; i < niterations; i++) {
    double x = (double)rand()/RAND_MAX;
    double y = (double)rand()/RAND_MAX;
    double z = x*x+y*y;
    if (z<=1) count++;
  }
  double pi=(double)count/niterations*4;
  return pi;
}

//=====================================================================================
int main(int argc, char** argv) {
  int iterations = 1000000;
  double pi_constant = GetPiConstant();
  printf("\n      Monte-carlo pi... \n\n             (\n              )\n         __..---..__\n     ,-='  /  |  \\  `=-.\n    :--..___________..--;\n     \\.,_____________,./ \n");
  double monte_carlo_pi = CalculatePi(iterations);  
  printf("\nTrue value of pi = %g \n",pi_constant);
  printf("\n# of trials= %d , estimate of pi is %g \n",iterations,monte_carlo_pi);
  printf("\nPercent difference = %g \%\n\n",100.0*(monte_carlo_pi-pi_constant)/pi_constant);


  if (fabsf((monte_carlo_pi-pi_constant)/pi_constant) < 0.01) {
    printf("\nYou're a pro! Now, have some pi.\n\n");
  }
  return 0;
}
//=====================================================================================
