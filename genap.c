#include <stdio.h>

int main() {
  int angka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  
  printf("Bilangan genap dalam array: \n");
  
  for(i=0; i<10; i++) {
    if(angka[i] % 2 == 0) {
      printf("%d ", angka[i]);
    }
  }
  
  return 0;
}