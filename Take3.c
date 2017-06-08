#include <stdio.h>
#include <stdlib.h>

//Simple Fibonacci in array

void Fibonacci(int N) {
  long int *fib;
  int i;
  fib = (long int*) malloc((N+1) * sizeof(long int));
  fib[0] = 0; //Defined values
  fib[1] = 1;
  for(i = 2; i <= N; i++) { //Completes the array of Fibonacci numbers
    fib[i] = fib[i-1] + fib[i-2]; //Where Fn = Fn-1 + Fn-2
  }
  printf("%ld\n", fib[N]);
  free(fib);
}

int main() {
  int N;
  scanf("%d", &N);
  Fibonacci(N);
  return 0;
}
