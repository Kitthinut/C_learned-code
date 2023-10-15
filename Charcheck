#include <stdio.h>
#include <string.h>

int main() {
  int i = 1;
  int j = 0;
  char c[10000];
  scanf("%s", c);
  for (i = 0; i < strlen(c); i++) {
    if (c[i] >= 'A' && c[i] <= 'Z') {
      j++;
    }
  }
  if (j < strlen(c)) {
    if (j == 0) {
      printf("All Small Letter");
    } else {
      printf("Mix");
    }
  } else {
    printf("All Capital Letter");
  }
}
