// get_string and printf with %s

#include <stdio.h>
#include <string.h>
int main(int argc, char * argv[])
{
  char *divisorChar = argv[1];
  int length = strlen(divisorChar);
  int divisor = 0;
  for (int i = 0; i < length; i++){
    int x = divisorChar[i] - '0';
    int power = length - 1 - i;
    int por2 = 1;
    for (int j = 0; j < power; j++){
      por2 = por2 * 2;
    }
    divisor = divisor + (x * por2);
  }
  printf("%i\n", divisor);
  char divisorAsChar = (char) divisor;
  printf("%c\n", divisorAsChar);
}
