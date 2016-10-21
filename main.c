

#include <stdio.h>
#include <stdlib.h>

int main()
{
int l=0;
int L=0;
int a=0;
int b=0;

printf("La longueur: \n");
scanf("%d",&l);
printf("La largeur: \n");
scanf("%d",&L);

for(a=1;a<=l;a++){

    for(b=1;b<=L;b++){

        if (a==1 || a==l || b==1 || b==L)
            printf("~");
        else
            printf("o");
            }
    printf("\n");
}

return 0;

}
