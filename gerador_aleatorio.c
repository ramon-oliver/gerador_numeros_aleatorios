#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
  int i,a,r,c,m,k;
  
  printf("Informe a quantidade de valores que deverao ser gerados !");
  scanf("%d", &k);
  
  int X[k];
  
  printf("Informe o valor semente !");
  scanf("%d", &r);
  
  a=13;
  m=pow(2,6);
  c=0;  
  
  
  printf("\n");
  for(i=0; i<k; i++){  	
  	X[i] = ((a*r)+c)%m ;      
    r = X[i];   	
  	printf("%d\n", X[i]);  
  }
  
  printf("\n");
  system("PAUSE");
  return 0;
}
