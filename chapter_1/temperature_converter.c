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

    // 6.1 indicates that we want at least 6 characters long (which gives us padding)
    // and that the precision of the float should be of 1 decimal
    // 3.0 means that we only required 3 characters padding and without decimal

    // %d is for integer
    // %f is for float
    printf("%3.0f %6.1d\n ", far, cel);

    start = start + step;
  }
}