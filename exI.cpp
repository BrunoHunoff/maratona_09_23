#include <stdio.h>

int main(){

    int area_abertura, num_estrelas, foton, i, cont=0;

    scanf("%d", &area_abertura);
    scanf("%d", &num_estrelas);

    for (i = 0; i < num_estrelas; i++)
    {
        scanf("%d", &foton);
 
        if(area_abertura*foton >= 40000000){
            cont++;
        }   
    }
    printf("%d\n", cont);

    return 0;
}