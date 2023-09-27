#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



void printStr(char stringToRepeat[25]) {
  printf("\n%s", stringToRepeat);
}



int main() {


  char stringToRepeat[25];
  printf("What message would you like to repeat? ");
  fgets(stringToRepeat, 25, stdin);

  int numberOfTimesToRepeat;
  printf("How many times would you like to repeat your message ");
  scanf("%d", &numberOfTimesToRepeat);





  int i = 0;
  while (i < numberOfTimesToRepeat) {
    printStr(stringToRepeat);
    i += 1;
  }


  return 0;
}
