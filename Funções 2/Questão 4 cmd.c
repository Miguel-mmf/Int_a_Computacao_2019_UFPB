#include <stdio.h>
#include <string.h>

void concatena(char p1[],char p2[],int n)
{
    int i,j;

    for(i=0;p1[i]!='\0';i++){
        printf("%c",p1[i]);
        if(i==n){
            printf(" ");
            for(j=0;p2[j]!='\0';j++)
                printf("%c",p2[j]);
        }
    }
}
int main(int argc,char *argv[])
{
    char p1[20],p2[20];
    int n=0;

    if(argc==3){
        strcpy(p1,argv[1]);
        strcpy(p2,argv[2]);
        n=strlen(argv[1])-1;
        concatena(p1,p2,n);
    }

    return 0;
}
