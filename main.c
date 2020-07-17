
//Listing 18.1 Using strlen() to determine the length of a string

#include <stdio.h>
#include <string.h>

int main(void)
{
    size_t length;
    char buf[80];

    while(1)
    {
        puts("\nEnter a line of text, a blank line to exit.");
        gets(buf);

        length = strlen(buf); //remember, strlen returns unsigned integer

        if(length != 0)
            printf("\nThat line is %u characters long.", length);
        else
            break;
    }
    return 0;
}

