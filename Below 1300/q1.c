#include <stdio.h>
#include <math.h>

int main() {
  int n ;
  scanf("%d",&n);
  int x[n];
  int y[n];
  int z[n];
  int i ;
  int sumx = 0 ;
  int sumy = 0 ;
  int sumz = 0 ;

  for (i=0;i<n;i++) {
    scanf("%d",&x[i]);
    scanf("%d",&y[i]);
    scanf("%d",&z[i]);
  }

  for (i=0;i<n;i++) {
    sumx += x[i] ;
    sumy += y[i] ;
    sumz += z[i] ;
  }

  if (!sumx && !sumy && !sumz )
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

}
