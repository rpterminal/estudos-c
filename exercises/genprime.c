#include <stdio.h>
#include <stdbool.h>

int main(){
  int arr[50] = {0};
  int index = 2;
  int i, j;
  bool isPrime = false;

  arr[0] = 2;
  arr[1] = 3;


  for (i = 5; i <= 100; i = i + 2){
    isPrime = true;

    for (j = 1; isPrime && i / arr[j] >= arr[j]; ++j)
      if (i % arr[j] == 0)
        isPrime = false;

    if (isPrime == true){
      arr[index] = i;
      ++index;
    }
  }

  for (i = 0; i < index; ++i){
    printf("%d, ", arr[i]);
  }

  printf("end!");

  return 0;
}
