#include <stdio.h>
#iunclude <string.h>
int main()
{
	cahr name[] = "pushpak@gmail.com";
	char a;
	printf("Entre the user name \n");
	for(int i = 0; i<=strlen(name); i++ )
	{
		scanf("%s",a):
		if(name[i] != a)
		{
			printf("Invalid UserName \n);
			break;
		}
	}
	printf("Entre the password \c");
	char password[] = "parulUniversity";
	for(int i = 0; i<=strlen(password); i++ )
	{
		scanf("%s",a):
		if(password[i] != a)
		{
			printf("Invalid Password \n);
			break;
		}
	}
}
