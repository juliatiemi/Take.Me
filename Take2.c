#include <stdio.h>

void whattoprint(int N) {
  int i = 1;
  while(i <= N) { //From 1 to N
    if(i%15 == 0) { //If it is a multiple of both 3 and 5
      printf("TakeNet\n");
    }
    else if(i%3 == 0) { //If it is a multiple of 3
      printf("Take\n");
    }
    else if(i%5 == 0) { //If it is a multiple of 5
      printf("Net\n");
    }
    else { //If it is not a multiple of neither 3 or 5
      printf("%d\n", i);
    }
    i++; //Check next number
  }
}

int main() {
  int N;
  printf("Insert number:\n");
  scanf("%d", &N);
  whattoprint(N);
  return 0;
}
