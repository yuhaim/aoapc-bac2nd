#include <stdio.h>

int main()
{
    int a, b, c;
    int i, Case = 0;
    int res;
    
    while(scanf("%d%d%d", &a, &b, &c)==3 && b && (a||b||c)) {
        printf("Case %d: %d.", ++Case, a/b);
        res = a;
        for(i=0; i<c; i++) {
            res = 10*(res%b);
            if(i<c-1) {
                printf("%d", res/b);
            } else {
                res = 10*(res%b);
                if(10*(res%b)/b>4)
                    printf("%d", res/b+1);
                else
                    printf("%d", res/b);
            }
        }
        printf("\n");
    }

    return 0;
}
