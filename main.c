#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[7];
    int i;
    for(i=0;i<7;i++)
    {
        str[i]=*argv[i];
    }
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
