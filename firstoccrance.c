#include<stdio.h>
#include<string.h>
void firstoccrn(char *ptr) {
    int add;
    for(int i=0; *(ptr+i) != '\0'; i++) {
      if(*(ptr+i) == ' ') {
      add = i+1;
      break;
    }
    }
      for(int j=add; *(ptr+j) != '\0'; j++) {
          printf("%c",*(ptr+j));
      }
}

int main() {
    char str[50];
    char *ptr;
    ptr = str;
    printf("Enter the string : \n");
    gets(str);
    firstoccrn(ptr);
    return 0;
}
