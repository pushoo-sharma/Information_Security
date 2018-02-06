#include <stdio.h>

int main()
{
    char message[6];
    /*
    char a = 'q' , b = 'w' , c = 'e',d = 'r',e = 't', f = 'y',g = 'u' ,h = 'i',i = 'o',j = 'p';
    char k = 'a',l ='s',m= 'd',n= 'f',o ='g',p ='h',q ='j',r ='k',s ='l',t ='z';
    char u ='x',v ='c',w ='v',x ='b',y ='n',z ='m';
    */
    char lets[] = {'a','b','c','d','e','f','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char tryD[] ={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    char Encrypt (char s)
    {
        for(int i = 0; i<26 ;i++)
        {
            if(lets[i] == s)
            {
                s = tryD[i];
                return s;
            }
        }
    }
    char Decrypted (char s)
    {
        for(int i = 0; i<26 ;i++)
        {
            if(tryD[i] == s)
            {
                s = lets[i];
                return s;
            }
        }
    }
    printf("Entre the 6 word message\n");
    {
        for(int i = 0; i<6 ;i++)
        {
            scanf("%c",&message[i]);
            message [i] = Encrypt(message[i]);
        }
    }
    printf("\nThe Encrypted message is\n");
    {
        for(int i = 0; i<6 ;i++)
        {
            printf("%c",message[i]);
        }
    }
    printf("\nThe Decrypted message is\n");
    {
        for(int i = 0; i<6 ;i++)
        {
            message [i] = Decrypted(message[i]);
            printf("%c",message[i]);
        }
    }

    return 0;
}



