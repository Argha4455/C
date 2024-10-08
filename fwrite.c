#include<stdio.h>
#include<string.h>
#define maxlen 50
  void main()
{
    int count;
    char string[maxlen];
    FILE *fp;
    fp=fopen("binary.txt","ab");
    if(fp==NULL){
        printf("\nFailed to open file");
        exit(1);
        }
    puts("\nEnter the message");
    gets(string);
    fwrite(string,strlen(string)+1,1,fp);

            fclose("binary.txt");
}
