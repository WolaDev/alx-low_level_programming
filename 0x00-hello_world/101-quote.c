#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Write the quote to standard error
  write(2, "and that piece of art is useful" "\n" "- Dora Korpar, 2015-10-19", 42);

  // Return 1
  return 1;
}
