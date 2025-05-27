#include <stdio.h>

int main(){
  float rain[5][12] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
  };
  float yTotal[5] = {0};
  float mTotal[12] = {0};
  float mAverage[12] = {0};
  float yearlyTot = 0.0;
  int year = 2020;

  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 12; ++j){
      yTotal[i] += rain[i][j];
      yearlyTot += rain[i][j];
    }

  printf("YEAR   RAINFALL (inches)");
  for (int i = 0; i < 5; ++i){
    printf("\n%d     %.1f", year + i, yTotal[i]);
  }

  printf("\nthe yearly average is %.1f inches", yearlyTot / 5);

  for (int i = 0; i < 12; ++i)
    for (int j = 0; j < 5; ++j)
      mTotal[i] += rain[j][i];
  
  for (int i = 0; i < 12; ++i)
    mAverage[i] = mTotal[i] / 5;

  printf("\n\nMONTHLY AVERAGES");
  printf("\njan feb mar apr may jun jul aug sep oct nov dec\n");
  for (int i = 0; i < 12; ++i)
    printf("%0.1f ", mAverage[i]);

  return 0;
}
