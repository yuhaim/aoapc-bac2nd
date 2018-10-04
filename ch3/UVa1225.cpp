#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    int states[10];

    while(T>0){
        memset(states, 0, sizeof(states));
        int N;
        scanf("%d", &N);
        for(int i=1; i<=N; i++){
            int tmp = i;
            while(tmp>0){
                states[tmp%10]++;
                tmp = tmp/10;
            }
        }

        for(int j=0; j<9; j++)
            printf("%d ", states[j]);
        printf("%d\n", states[9]);
        T--;
    }

    return 0;
}

