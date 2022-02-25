#include <stdio.h>

void void1(void) { printf("You invoked the first function\n"); }
void void2(void) { printf("You invoked the second function\n"); }
void void3(void) { printf("You invoked the third function\n"); }

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mult(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
int gt(int a, int b) { return a > b ? a : b; }

int main(void) {
  int a = 0;
  int b = 0;
  int op = 0;
  int res = 0;

  void (*void_ptr[3])(void);
  int (*int_ptr[5])(int, int);

  void_ptr[0] = void1;
  void_ptr[1] = void2;
  void_ptr[2] = void3;

  int_ptr[0] = sum;
  int_ptr[1] = sub;
  int_ptr[2] = mult;
  int_ptr[3] = div;
  int_ptr[4] = gt;

  for (int i = 0; i < 3; ++i) {
    void_ptr[i]();
  }

  printf("Enter two integers: ");
  scanf("%d%d", &a, &b);
  printf("Enter:\n");
  printf("[0] to sum;\n");
  printf("[1] to subtract;\n");
  printf("[2] to multiply;\n");
  printf("[3] to divide;\n");
  printf("[4] to see which one is greater.\n");
  scanf("%d", &op);
  res = int_ptr[op](a, b);
  printf("result: %d\n", res);
  return 0;
}