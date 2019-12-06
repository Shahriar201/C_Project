#include<stdio.h>
int main()
{
    int j, n;
    char ch[500];
    printf("Enter a string to reverse: \n");
    gets(ch);

    strrev(ch);
    //for(j= ch-1; j>0; j--);

    printf("String reverse is : %s ",ch );

    return 0;
}
