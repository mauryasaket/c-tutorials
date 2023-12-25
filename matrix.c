#include <stdio.h>
//this is a 3*3 matrix

int main() {
  int i,j;
  int matrix[][];

  for(int i =0; i<3 ; i++){
    for(int j = 0; j<3 ; j++){
      printf("enter the element at %d%d position:-", i+1,j+1);
      scanf("%d",&matrix[i][j]);
      
    }
   
  }
  printf("this is matrix %d",matrix[i][j]);

 

     
    
  
  return 0;
}