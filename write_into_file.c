#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("file.txt", "a");  //a = append a file every time newly

    char name[100];
    int age;

    if(file == NULL)
    {
        printf("File does not exit\n");
    }
    else
    {
        printf("File is created\n");
        printf("Enter your name\n");
        gets(name);
        //fputs(name, file);

        printf("Enter your age\n");
        scanf("%d", &age);

        fprintf(file, "Name = %s\n Age = %d\n", name, age);
        fclose(file);
    }



    printf("File is written successfully");



   
    getch();
}
