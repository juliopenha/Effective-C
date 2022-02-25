#include <stdio.h>

static unsigned int counter = 0;

void increment(void) {
  counter++;
  printf("inc: %d\n", counter);
}

unsigned int retrieve() { return counter; }

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
    printf("ret: %d\n", retrieve());
  }
  return 0;
}