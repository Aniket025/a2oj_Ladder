#include <stdio.h>
#include <math.h>

int main() {
  int arr_x[5][5] ;
  int i , j ,loc_x,loc_y;
  int sum , result ;

  for (i=0 ; i<5 ; i++) {
    for (j=0 ; j<5 ; j++){
      scanf("%d", &arr_x[i][j]);
      if (arr_x[i][j] == 1 )
      {
        loc_x = i ;
        loc_y = j ;
      }
    }
  }

  result = abs(loc_x - 2) ;
  result = result + abs(loc_y - 2) ;
  printf ("%d",result);

  return 0 ;
}
