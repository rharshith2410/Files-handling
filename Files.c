#include <stdio.h>
#include <conio.h>
 main()
{
FILE *fp;
char ch;
int i;
fp=("fresh.txt","w");
fprintf(fp,"My captain");
fclose(fp);
printf("The input for the inverse function is\n");
fp=("fresh.txt","r");
for(i=0;i<10;i++)
  {
    ch=getc(fp);
    printf("%c",ch);
  }
printf("/nOutput");
for(i=9;i>=0;i--)
  {
  printf("%c",ch);
  }

fclose(fp);
}




