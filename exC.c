#include <stdio.h>

int main(){
    int num, i=0;

    scanf("%d", &num);

    if (num%2 == 0)
        {
            num++;
        }

    while (i<=5)
    {

        printf("%d\n", num);
        
        num+=2;
        i++;
    }
    
    return 0;
}