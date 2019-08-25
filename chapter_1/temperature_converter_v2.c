#include <stdio.h>

// Note that:
// They do not require ; at the end
// The are outside the function definition
// they are kind of weird with the define and everyting.
#define START 0
#define FINISH 300
#define STEP 20

int main() {
  int far;

  for(far = START; far <= FINISH; far = far + STEP) {
    printf("%3d %6.1f\n", far, (5.0/9.0) * (far - 32));
  }
}