#include <stdio.h>

int main(){
    int pressaoDes, pressaoLida;

    do{
    scanf("%d", &pressaoDes);
    scanf("%d", &pressaoLida);
    }while((pressaoDes<=1)&&(pressaoDes>=40)&&(pressaoLida<=1)&&(pressaoLida>=40));

    printf("%d", pressaoDes-pressaoLida);
    
    return 0;
}