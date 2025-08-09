#include <stdio.h>

int main()
{
    FILE *fp = NULL;

   fp = fopen("sailesh.txt","r");
   if(fp == NULL)
   {
    printf("Error while opening the file");
   }

   else
   {
    printf("File opened succesfully");
    fclose(fp);
   }

}