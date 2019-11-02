#include <stdio.h>
#include <string.h>

double getLength(char *arr, int size);


int main () {
  /* pass pointer to the array as an argument */
  getLength("1001", 5 ) ;
  return 0;
}

double getLength(char *arr, int size) {
  printf("arr es %s\n", arr);
  int l = strlen(arr);
  printf("tamanio %i\n", l);
  for (int i = 0; i < l; i++){
    printf("   char es %c\n", arr[i]);
  }
  char dest[10];
  strcpy(dest, arr);
  int destreal = sizeof(dest);
  printf("destreal %i\n", destreal);
  printf("dest es %s\n", dest);
  int ll = strlen(dest);
  printf("tamanio %i\n", ll);
  for (int i = 0; i < ll; i++){
    printf("   char es %c\n", dest[i]);
  }
  return 0;

}