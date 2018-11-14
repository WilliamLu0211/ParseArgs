#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args(char * line);


char ** parse_args(char * line){
  char *string3[6];
  char ** string = malloc(sizeof(char*)*6);
  int i =0;
  while(i < 5){
    string[i] = strsep(&line, " ");
    i += 1;
  }
  return string;
}


int main(){
  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  
  printf("%s\n", parse_args("ls -a -l")[0]);
}
