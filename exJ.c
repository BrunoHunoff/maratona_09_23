#include <stdio.h>

int main(){
        int intervalos, tempo, velocidade, i, dist = 0;

        scanf("%d", &intervalos);
        if((intervalos<1)||(intervalos>1000)){
        return 1;
        }
        
        for (i = 0; i < intervalos; i++)
        {
        
            scanf("%d %d", &tempo, &velocidade);
            dist = dist+tempo*velocidade;
        if ((tempo<1)||(tempo>100)||(velocidade<0)||(velocidade>120)){
            return 1;
        }
        }

        printf("%d\n", dist);
        
        return 0;

}