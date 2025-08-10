#include <stdio.h>
#include <errno.h>
#include <string.h> // for strerror()

int main()
{
    FILE *fp;

    // open a non exsistin file
    fp = fopen("this_file_does_not_exist.txt", "r");

    if (fp == NULL)
    {
        printf("errno value: %d\n", errno);              // print the error code
        printf("error text: %s\n", strerror(errno));     // print error message
        perror("perror says");                           // perror message
        return 1;
    }

    fclose(fp);
    return 0;
}
