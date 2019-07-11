#include<stdio.h>
#include<stdlib.h>

int main(){
  int D1, D2;
  int D;

  D1 = rand()%6 +1;
  D2 = rand()%6 +1;
  D = D1 + D2;


  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",D1);
  printf("Die 2: %d\n",D2);
  printf("Total value: %d\n",D);

  return 0;
}
