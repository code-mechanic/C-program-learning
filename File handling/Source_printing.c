/*
  What is stdin and stdout?
  -> Basically <stdio.h> input function that doesn't take FILE * as an argument(Eg. scanf)
     that are read input from standard input(console)
     
     scanf("%d",&var); is equal to fscanf(stdin,"%d",&var);
     SYNTAX for scanf  : scanf("format specifier",&var);
     SYNTAX for fscanf : fscanf("FILE *,"format specifier",&var);
  
     similarly,
     printf("%c",ch); is equal to fprintf(stdout,"%c",ch);
     SYNTAX for printf   : printf("format specifier (or) string",var);
     SYNTAX for fprintf  : fprintf(stdout,"format specifier (or) string",var); 
     
  What is differance between getc() and getchar()?
  -> Both this function are available in <stdio.h>
  -> SYNTAX for getc()    : int getc(FILE *stream); 
     SYNTAX for hetchar() : int getchar(void); 
  -> getc() is capable of getting single charater from a file.
     getchar() is capable of getting single charater from standard input(console).
     getc(stdin) is equivalent to getchar(). Now getc is also capable of read charater
     from console.
  
  How to read any file without using FILE pointer and using standard input function?
  -> This is done by manually.
  -> open command prompt and compile the source file.c
     command = gcc source_file.c -o souce_file
  -> while execution that target_file(going to be an input) is given input to that program.
     command = source_file.exe <target_file (here '<' indicate target_file is going to be as input
                                             to souce_file.exe program)
*/

#include <stdio.h>
void main()
{
  char ch;
  while( (ch=getc(stdin)) != EOF) //(or) while( (ch = getchar()) != EOF)
  {
    fprintf(stdout,"%c",ch);      //(or) printf("%c",ch);
  }
  fprintf(stdout,"\nMOHAN\n");    //(or) printf("MOHAN");
  printf("hai");                  //(or) fprintf(stdout,"hai");
}