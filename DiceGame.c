#include<stdio.h>
#include<stdlib.h>

int main(){
  int D1, D2;
  int D;

  D1 = rand()%6 +1;
  D2 = rand()%6 +1;
  D = D1 + D2;
  
  char name[20];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello %s!\n",name);


  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",D1);
  printf("Die 2: %d\n",D2);
  printf("Total value: %d\n",D);

  if(D <= 7){
    printf("%s lost.\n",name);
    printf("Rolling the more dice...\n");   

  }
  else{
    printf("%s won.\n",name);
  }

  while(D <= 7){
    int D3;
    D3 = rand()%6+1;
    D += D3;
    printf("Die new: %d\n",D3);
    printf("Total new value: %d\n",D);

    if(D <= 7){
      printf("%s lost.\n",name);

    }
    else{
      printf("%s won.\n",name);
    }
  }

  
  

  return 0;
}
