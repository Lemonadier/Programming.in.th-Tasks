#include <stdio.h>

int main(void) {
  int n, x, Mx=-2000000000, Mn=2000000000;
  scanf("%d", &n);
  while (n > 0){
    n--;
    scanf("%d", &x);
    if (x < Mn){
      Mn = x;
    }else if (x > Mx){
      Mx = x;
    }
  }

  printf("%d\n%d", Mn, Mx);
  return 0;
}