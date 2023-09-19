#include <stdio.h>

int main(){
    int numX, numY;

    scanf("%d%d", &numX, &numY);

    while ((numX != 0)||(numY != 0))
    {
        if ((numX>0)&&(numY>0))
        {
            printf("primeiro\n");
        }
        else if ((numX<0)&&(numY>0))
        {
            printf("segundo\n");
        }
        else if ((numX<0)&&(numY<0))
        {
            printf("terceiro\n");
        }
        else if ((numX>0)&&(numY<0))
        {
            printf("quarto\n");
        }
        
        scanf("%d%d", &numX, &numY);

    }

    return 0;

}