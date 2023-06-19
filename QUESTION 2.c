#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    printf("Enter an string \n");
    gets(str);
    int i=0,j=strlen(str)-1;
    while(i<j)
    {
     while (!isalnum(str[i])) {
            i++;
        }
        while (!isalnum(str[j])) {
            j--;
        }
        if (isalnum(str[i]) && isalnum(str[j])) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }
     printf("%s",str);
    return 0;
}
