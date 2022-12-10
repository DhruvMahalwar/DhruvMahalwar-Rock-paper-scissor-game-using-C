#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("ENTER THE NAME OF THE PLAYER\n");
    char name[100];
    gets(name);
    printf("ENTER THE NUMBER OF ROUNDS YOU WANT TO PLAY ROUNDS\n");
    int n;
    int a=0,b=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("----0=Rock----1=Paper-----2=Scissor\n");
        int f;
        scanf("%d",&f);



        srand(time(NULL));
        int g=rand()%2;



        
        printf("%d\n",g);
        if(g==0&&f==1)
        {
            b++;
            printf("computer loose\n");
        }
        if(g==0&&f==2)
        {
            a++;
            printf("%s loose\n",name);
        }
        if(g==1&&f==0)
        {
            a++;
            printf("%s loose\n",name);
        }
        if(g==1&&f==2)
        {
            b++;
            printf("computer loose\n");
        }
        if(g==2&&f==0)
        {
            b++;
            printf("computer loose\n");
        }
        if(g==2&&f==1)
        {
            a++;
            printf("%s loose\n",name);
        }
        if(g==f)
        {
            printf("TIE\n");
        }
    }
    printf("Score computer = %d   %s = %d\n",a,name,b);
    if(a>b)
    {
        printf("COMPUTER WINNER\n");
    }
    else if(a<b)
    {
        printf("%s WINNER\n",name);
    }
    else{
        printf("TIE\n");
    }
    return 0;
}