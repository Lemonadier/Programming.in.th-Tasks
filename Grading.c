#include <stdio.h>

int main(void) {
  int x,y,z;
  scanf("%d %d %d", &x, &y, &z);
  x = x + y + z;

  if (x > 79){
    printf("A");
  }else if (x>74){
    printf("B+");
  }else if (x>69){
    printf("B");
  }else if (x>64){
    printf("C+");
  }else if (x>59){
    printf("C");
  }else if (x>54){
    printf("D+");
  }else if (x>49){
    printf("D");
  }else{
    printf("F");
  }
  return 0;
}