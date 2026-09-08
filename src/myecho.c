#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* nlopt = "-n";
int main(int argc, const char* argv[])
{
    if (argc == 1){
        printf("\n");
        exit(0);
    }

    int enable_newline = strcmp(argv[1], nlopt) != 0;
    int start_index = enable_newline ? 1 : 2;

    if (!enable_newline && argc == 2){
        exit(0);
    }

    for(int i = start_index; i < argc; i++)
    {
        printf("%s", argv[i]);
        if (i != argc - 1){
            printf(" ");
        }
    }

    if (enable_newline){
        printf("\n");
    }
    
    return 0;
}