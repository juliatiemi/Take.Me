#include <stdio.h>
#include <math.h>

/* Looking for the 10 next prime numbers after a given N*/

int primetest(int N) {
  int root = sqrt(N), i;
  for (i = 3; i <= root; i+=2) { //this loop starts at 3 and increases by 2 because a even number will never be sent to this function
    if(N%i == 0) {
      return 0;
    }
  }
  return 1;
}

void getprimes(int N, int counter) {
  while(counter < 10) {
    if(primetest(N) == 1) {
      counter++;
      printf("%d ", N);
    }
    N+=2; //Increases by 2 so it ignores every even N
  }
  printf("\n");
}

int main() {
  int N, counter = 0;
  printf("Insert number:\n");
  scanf("%d", &N);
  printf("The next 10 primes after %d are: \n", N);
  if(N%2 == 0) { //if N is a even number, we can start to look for primes at N+1
    N+=1;
  }
  else if(N == 1) { //Special case where 2 is one of the next primes
    printf("2 ");
    counter++;
    N+=2;
  }
  else { //otherwise, we'll start at N+2, since N+1 is even, therefore it is also a composite number and it won't be relevant
    N+=2;
  }
  getprimes(N, counter);
  return 0;
}
