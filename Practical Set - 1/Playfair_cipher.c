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

/*  Tested  - Corrected */
/*
#include <stdio.h>
void remove_input_to_matrix(char str[],int size)
{
    int store[10001] = {0};
    for(int i = 0;i<size;i++)
    {
        store[str[i]] = 1;
    }
    char input_matrix[25];
    int flag = 0;
    for(int i = 97;i<=122 ;i++)
    {
        if(!store[i])
        {
            input_matrix[flag++] = i;
        }
    }
    int size_one = sizeof(input_matrix)/sizeof(input_matrix[0]);
    for(int i = 0;i<size_one;i++)
    {
        printf("%c ",input_matrix[i]);
    }
   // return input_matrix;
}
int main()
{
    char str[] = {'h','e','l','l','o'};
    int size = sizeof(str)/sizeof(str[0]);
    remove_input_to_matrix(str,size);
    return 0;
}
-----------------------------------------Part 2
#include <stdio.h>
void remove_input_to_matrix(char str[],int size)
{
    int store[10001] = {0};
    for(int i = 0;i<size;i++)
    {
        store[str[i]] = 1;
    }
    char input_matrix[25];
    int flag = 0;
    for(int i = 97;i<=122 ;i++)
    {
        if(!store[i])
        {
            input_matrix[flag++] = i;
        }
    }
    int size_one = sizeof(input_matrix)/sizeof(input_matrix[0]);
    for(int i = 0;i<size_one;i++)
    {
        printf("%c ",input_matrix[i]);
    }
   
}
void check_key(char str[],int size)
{
    char arr_return[101];
    int flag = 0,count[101] = {0};
    for(int i = 0; i<size ; i++)
    {
        if(count[str[i]] == 0)
        {
            count[str[i]] = 1;
            arr_return[flag++] = str[i];
        }
    }
    for(int i = 0;i<=flag;i++)
    {
        //printf("%c ",arr_return[i]);
        
    }
}
int main()
{
    char str[] = {'h','e','l','l','o'};
    int size = sizeof(str)/sizeof(str[0]);
    printf("\n%d",size);
    //remove_input_to_matrix(str,size);
    check_key(str,size);
    return 0;
}

*/
/*----6-02



#include <stdio.h>
#define m 5
#define n 5
//int count[1001] = {0};
char mat [m][n];
void remove_input_to_matrix(char str[],int size)
{
    int store[10001] = {0};
    for(int i = 0;i<size;i++)
    {
        store[str[i]] = 1;
    }
    char input_matrix[25];
    int flag = 0;
    for(int i = 97;i<=122 ;i++)
    {
        if(!store[i])
        {
            input_matrix[flag++] = i;
        }
    }
    int size_one = sizeof(input_matrix)/sizeof(input_matrix[0]);
    for(int i = 0;i<size_one;i++)
    {
        printf("%c ",input_matrix[i]);
    }
   //return input_matrix;
}
int check_key(char str[],int size)
{
    char arr_return[101];
    int flag = 0,count[250] = {0};
    for(int i = 0; i<size ; i++)
    {
        if(count[str[i]] == 0)
        {
            count[str[i]] = 1;
            arr_return[flag++] = str[i];
        }
    }
    int flag1 = 4;
    for(int i = 0;i < 5 ;i++)
    {
        for(int j = 0;j < 5; j++)
        {
            if(flag >= flag1)
                mat[i][j] = arr_return[flag1++];
            else
                break;
        }
        
    }
    printf("%d",flag1);
    return flag1;
}
int main()
{
    char str[] = {'h','e','l','l','o'};
    int size = sizeof(str)/sizeof(str[0]);
    int flag1;
    //printf("\n%d\n",size);
    //char input_matrix[25];
    check_key(str,size);
    //remove_input_to_matrix(str,size);
    for(int i = 0;i < 5 ;i++)
    {
        for(int j = 0;j < 5; j++)
        {
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}



*/
