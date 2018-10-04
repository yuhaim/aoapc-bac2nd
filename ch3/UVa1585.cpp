#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T>0){
        int score = 0;
        char buf[85];
        scanf("%s",buf);
        int len = strlen(buf);
        int accum = 0;
        for(int i = 0; i<len; i++){
            if(buf[i]=='O') {
                score++;
                score += accum;
                accum++;
            } else {
                accum = 0;
            }
        }

        printf("%d\n", score);
        T--;
    }

    return 0;
}

