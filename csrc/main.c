#include <unistd.h>

int main(){
  write(1, "Z\n", 2);
  return 0;
}
