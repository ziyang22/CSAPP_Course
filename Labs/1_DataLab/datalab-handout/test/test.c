#include<stdio.h>

int bitXor(int x, int y) {
    return ~(~(~x & y)&~(~y&x));
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", bitXor(x, y));
    return 0;
}