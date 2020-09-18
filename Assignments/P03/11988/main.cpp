#include <cstdio>
#include <cstring>



int main() {
  char text[100005];
  while (scanf("%s", text) != EOF) {

    int len = strlen(text);

    for (int i = len - 1; i >= 0; --i){

      if (text[i] == '['){

        for (int j = i + 1; text[j] != ']' && text[j] != '[' && j < len; ++j){
          putchar(text[j]);
        }
      }
    }

    for (int i = 0; text[i] != '[' && text[i] != ']' && i < len; ++i){
      putchar(text[i]);
    }

    for (int i = 0; i < len; ++i){
      if (text[i] == ']'){
        for (i = i + 1; text[i] != '[' && i < len; ++i){
          if (text[i] != ']') putchar(text[i]);
        }
      }
    }
    puts("");
    
  }
  return 0;
}