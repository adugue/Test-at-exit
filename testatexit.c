#include <stdio.h>
#include <stdlib.h>

void cleanup() {
    printf("Thank you\n");
}


int main (int argc, char **argv) 
{
    atexit(cleanup);

    if (argc == 3) {
        printf("AAAAH!\n");
        abort();
    }
    
    if (argc != 2)
    {
        printf("usage: %s <number>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int value = atoi(argv[1]);
    printf("%d^2 == %d\n", value, value * value);
    
    return EXIT_SUCCESS;
}