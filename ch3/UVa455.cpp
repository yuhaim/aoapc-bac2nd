#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d\n", &N);
    char buf[85];
    int start = 1;

    while(N>0){
        scanf("%s\n", buf);
        int len = strlen(buf);
        int period = 1;
        for(;period<=len/2;period++){
            int i=period;
            for(; i<len; i++){
                if(buf[i]!=buf[i-period]){
                    break;
                }
            }
            if(i==len) break;
        }
        
        if(!start){
            printf("\n");
        }
        start = 0;

        if((len%period) || (period == len/2+1)) period = len;
        printf("%d\n", period);
        N--;
    }

    return 0;
}

