#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
  int i,a,r,c,m;
  int X[10];
  
  a=13;
  m=pow(2,6);
  c=0;  
  r=13;
  
  for(i=0; i<10; i++){
  	
  	X[i] = ((a*r)+c)%m ; 
      
    r = X[i]; 
  	
  	printf("%d\n", X[i]);
  
  }
  
 
  system("PAUSE");
  return 0;
}
