#include <stdio.h>

#define START 0
#define FINISH 300
#define STEP 20

int main() {
  int far;

  for(far = START; far <= FINISH; far = far + STEP) {
    printf("%3d %6.1f\n", far, (5.0/9.0) * (far - 32));
  }
}