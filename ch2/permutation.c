#include <stdio.h>
#include <time.h>

int main()
{
    int digits[9];
    int states[9], i, sum;
    int abc, def, ghi;

for(digits[0] = 1; digits[0]<=9; digits[0]++)
for(digits[1] = 1; digits[1]<=9; digits[1]++)
for(digits[2] = 1; digits[2]<=9; digits[2]++)
for(digits[3] = 1; digits[3]<=9; digits[3]++)
for(digits[4] = 1; digits[4]<=9; digits[4]++)
for(digits[5] = 1; digits[5]<=9; digits[5]++)
for(digits[6] = 1; digits[6]<=9; digits[6]++)
for(digits[7] = 1; digits[7]<=9; digits[7]++)
for(digits[8] = 1; digits[8]<=9; digits[8]++) {
    for(i=0; i<9; i++)
        states[i] = 0;

    for(i=0; i<9; i++)
        states[digits[i]-1] = 1;
    sum = 0;
    for(i=0; i<9; i++)
        sum += states[i];

    abc = digits[0]*100+digits[1]*10+digits[2];
    def = digits[3]*100+digits[4]*10+digits[5];
    ghi = digits[6]*100+digits[7]*10+digits[8];

    if(sum==9 && (2*abc == def) && (3*abc == ghi))
        printf("%d %d %d\n", abc, def, ghi);
}

#ifdef LOCAL
    printf("Time Elapsed: %.6f\n", (double)clock()/CLOCKS_PER_SEC);
#endif
    return 0;
}

