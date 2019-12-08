#include<stdio.h>
int main()
{
    FILE *file;
    char ch[100];
    file = fopen("file.txt", "r"); //r = read only file

    if(file == NULL)
    {
        printf("File does not exit\n");
    }
    else
    {
        printf("File is created\n");

        while(!feof(file))
        {
            fgets(ch, 40, file);
            printf("%s\n", ch);
        }

        fclose(file);
    }

    //printf("File is written successfully\n");

    getch();
}
