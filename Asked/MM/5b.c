#include <stdio.h>

int temp(int i)
{
    if( i == 0 ){
        return 0;
    }
    if( i == 1 ){
        return 1;
    }
    return temp(i-1) + temp(i-2);
}
int main(void)
{
    int i;
    for(i=0; i < 10; ++i){
        printf("%d\t\n", temp(i) );
    }

    return 0;
}
