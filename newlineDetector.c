#include <stdio.h>

/**
detectNewline prints a symbol representing a newline (\n), carriage return (\r), tab (\t) and
optioanlly a space ( ), instead of printing the actual character, There are two option paramters.
If printSpaces is passed in as 1, [space] will be printed in place of every space. If newlineAfter
is passed in as 1, an actual newline will be printed after the terminating null byte. 
**/
void detectNewline(char *p, int printSpaces, int newlineAfter){
    char c;
    while((c = *p++)){
        switch(c){
            case '\n':
                printf("\\n");
                break;
            case '\r':
                printf("\\r");
                break;
            case '\t':
                printf("\\t");
                break;
            case ' ':
                if(printSpaces){
                    printf("[space]");
                }
                else{
                    printf(" ");
                }
                break;
            default:
                printf("%c", c);
        } 
    }
    if(newlineAfter){
        printf("\n");
    }
}
