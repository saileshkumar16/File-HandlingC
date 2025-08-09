#include <stdio.h>

int main()
{
    FILE *fp = fopen("sailesh.txt","w");


    if(fp==NULL)
    printf("Error opening the file");

char str[]="Hi\nHello";

int i=0;

while(str[i]!='\0')
{
    fputc(str[i],fp);
    i++;

}

    fclose(fp);

    return 0;
}