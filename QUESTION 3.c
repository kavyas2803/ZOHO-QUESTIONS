#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter an string \n");
    gets(str);
    while(str[i]!='\0')
    {
      if(i==0 || str[i-1]==' ')
        {
            printf("%c",toupper(str[i]));
        }
        else
        {
            printf("%c",tolower(str[i]));
        }
        i++;
  }
  
    return 0;
}
