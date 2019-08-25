#include <stdio.h>

int main() {

  float far, cel;
  int start, finish, step;

  start = 0;
  finish = 300;
  step = 20;

  while(start <= finish) {
    far = start;
    cel = 5.0 / 9.0  * (far - 32);

    printf("%3.0f %6.1f\n ", far, cel);

    start = start + step;
  }
}