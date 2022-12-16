
#include <stdio.h>
int main(void)
{
    int n;
    do{
        scanf("%d",&n);

    }while(n<8 && n>0);
    int x=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=x-1)
            printf("#");
            else
            printf(" ");
        }
        printf("\n");
        x--;
    }

}
