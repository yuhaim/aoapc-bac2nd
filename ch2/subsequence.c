#include <stdio.h>

int main()
{
    int n, m;
    double sum = 0.0;
    int Case = 0;
    int i;

    while(scanf("%d%d", &n, &m) == 2 && n && m) {
        for(i = n; i<=m; i++)
            sum += 1.0/(1.0*i*i);
        printf("Case %d: %.5f\n", ++Case, sum);
    }

    return 0;
}
