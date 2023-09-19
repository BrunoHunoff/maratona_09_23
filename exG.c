#include <stdio.h>

int main(){
    int T, A, B, C, D, E, certos= 0;

    do{
    scanf("%d", &T);

    scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
    }while ((T<1)||(T>4)||(A<1)||(A>4)||(B<1)||(B>4)||(C<1)||(C>4)||(D<1)||(D>4)||(E<1)||(E>4));

    if (A == T)
    {
        certos++;
    }
    if (B == T)
    {
        certos++;
    }
    if (C == T)
    {
        certos ++;
    }
    if (D == T)
    {
        certos ++;
    }
    if (E == T)
    {
        certos ++;
    }

    printf("%d\n", certos);
    
    return 0;
    
}