#include <stdio.h>

int main()
{
    int A, B, C;
    int sum;
    for(A=0; A<10; A++)
        for(B=0; B<10; B++)
            for(C=0; C<10; C++){
                sum = A*A*A+B*B*B+C*C*C;
                if(sum<100) continue;
                if(sum>999) break;
                if(sum%10==C && sum/10%10==B && sum/100 ==A)
                    printf("%d\n",sum);
            }
                
    return 0;
}
