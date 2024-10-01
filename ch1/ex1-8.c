#include <stdio.h>

/*Ex 1-8: Write a program to count blanks, tabs, and newlines*/

int main(void){
  int blanks, tabs, newlines; 
  blanks = 0;
  tabs = 0;
  newlines = 0;

  char c = getchar();

  while(c != EOF){
    c = getchar();
     // ascii for \t = 9
    if (c == '\t'){
      tabs++;
    }
    // ascii for blank space = 32
    if (c == ' '){
      blanks++;
    }
    // ascii for \n = 10
    if (c == '\n'){
      newlines++; 
    }
    printf("newlines: %d | tabs: %d | blanks: %d", newlines, tabs, blanks);
  }
}




