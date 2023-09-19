#include <stdio.h>

int main(){
    int totalMand =225, num;

    scanf("%d", &num);
    totalMand = totalMand+num*300;

    scanf("%d", &num);
    totalMand = totalMand+num*1500;

    scanf("%d", &num);
    totalMand = totalMand+num*600;

    scanf("%d", &num);
    totalMand = totalMand+num*1000;

    scanf("%d", &num);
    totalMand = totalMand+num*150;

    printf("%d\n", totalMand);

    return 0;
}