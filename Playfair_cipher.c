/*	UNDER WORKING*/
#include <stdio.h>
#define m 5
#define n 5
int count[1001] = {0};
char mat [m][n];
char remove_input_to_matrix(char str[],int size)
{
    int store[10001] = {0};
    for(int i = 0;i<size;i++)
    {
        store[str[i]] = 1;
    }
    char input_matrix[25];
    for(int i = 97;i<=122 ;i++)
    {
        if(!store[i])
        {
            input_matrix = (char)i;
        }
    }
    return input_matrix;
}
char check_key(char str[],int size)
{
    char arr_return[101];
    int flag = 0;
    for(int i = 0; i<size ; i++)
    {
        if(count[str[i]] == 0)
        {
            count[str[i]] ++;
            arr_return[flag++] = str[i];
        }
    }
    return arr_return;
}
void create_matrix(char str[],int size,char input_matrix[],int size_one)
{
    int count = 0,count_one = 0;
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 5;j++)
        {
            if(count != size)
            {
                mat[i][j] = str[count++];
            }
            else if()
            {
                mat[i][j] = str[count_one++]; 
            }
        }
    }
    for(int i = 0;i < 5; i++)
    {
        for(int j = 0;j < 5; j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char str[] = {'h','e','l','l','o'};
    int size = sizeof(str)/sizeof(str[0]);
    str[] = check_key(str,size);
    char input_matrix = remove_input_to_matrix(str[], size);
    int size_one = sizeof(input_matrix)/sizeof(input_matrix);
    create_matrix(str,size,input_matrix,);
    return 0;
}



