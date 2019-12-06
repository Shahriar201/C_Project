#include<stdio.h>
int main()
{
 int a,b,add,sub,mul,div,option, n;
 printf("Enter your two Number :\n ");
 scanf("%d %d",&a,&b);

 while(1)
 {
    printf(" 1 For Addition\n");
    printf(" 2 For Subtraction\n");
    printf(" 3 For Multipliction\n");
    printf(" 4 For Divission\n");
    printf(" 5 For exit\n");

    printf("Enter your choice:\n ");
    scanf("%d",&n);

    if(n == 1)
    {
         add=a+b;
         printf("Addition is : %d/n",add);

         printf("\n");
    }

    else if(n == 2)
    {
         sub=a-b;
         printf("Subtraction is : %d\n",sub);
         printf("\n");
    }

    else if(n == 3)
    {
         mul=a*b;
         printf("Multiplication is : %d\n",mul);
         printf("\n");
    }

    else if(n == 4)
    {
         div=a/b;
         printf("Division is : %d",div);
         printf("\n");
    }


        //break;

    else
    {
         break;
    }

 }

 if(n==5)
    printf("Exit\n");



return 0;
}

