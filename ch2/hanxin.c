#include <stdio.h>

int main()
{
    int a, b, c;
    int total;
    int Case = 0;

    while(scanf("%d %d %d", &a, &b, &c)==3){
        Case++;
        for(total=10; total<101; total++) {
            if(total%3==a && total%5==b && total%7==c) {
                printf("Case %d: %d\n", Case, total);
                break;
            }
        }

        if(total==101) printf("Case %d: No answer\n", Case);
    }

    return 0;
}
