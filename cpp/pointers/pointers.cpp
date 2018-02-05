#include <stdio.h>

/*
 * You have to complete the function void update(int *a,int *b), 
 * which reads two integers as argument, a and b,
 * and sets a to be the sum of them, and b with the absolute difference of them.
 */

void update(int *a,int *b) {
  int tmp = *a + *b;
  
  if (*a > *b) {
    *b = *a - *b;
  } else {
    *b = *b - *a;
  }
  
  *a = tmp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
