#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char** parse_args(char* line){
  char** strings = calloc(6, sizeof(char*));
  int i = 0;
  while (line){
    strings[i] = strsep(&line, " ");
    i ++;
  }
  strings[i] = 0;
  return strings;
}

int main(){
  char line[] = "ls -a -l";
  char ** args = parse_args( line );
  execvp(args[0], args);
  return 0;
}
