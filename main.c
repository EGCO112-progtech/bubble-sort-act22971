#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc ,char *argv[]) {
  int i,*a,N;
int j=0,new_number;
N=argc-1;
a=(int*)malloc(sizeof(int)*N);
int *prime=(int*)malloc(sizeof(int)*N);
for(i=0;i<N;i++) {
a[i]=atoi(argv[i+1]);
  if(Isprime(a[i])){
    prime[j] = a[i];
    j++;
  }
}
  N = j;
    if(N==0){
  printf("No prime\n");}else{
   display(prime,N);
  bubbleSort(prime,N); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(a,N);
      }
 return 0;
}


