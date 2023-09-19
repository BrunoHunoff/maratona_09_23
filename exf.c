#include <stdio.h>

int main(){
    int numA, numB, carta;

    scanf("%d", &numA);
    scanf("%d", &numB);

    if (numA == numB)
    {
        carta = numA;
    }
    else if (numA>numB)
    {
        carta = numA;
    }
    else if (numB>numA)
    {
        carta=numB;
    }

    printf("%d\n", carta);
    
    return 0;
    
}