#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]; char s2[50]; int i; int j;

    printf("Enter the value:\n");
    gets(s2);

    int x=strlen(s2);

        for( i=0 ; i<x ; i++)
        {
            s1[i]=s2[i];
        }
        s2[i]='\0';

    printf("output : %s",s1);


return 0;
}

