
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double unit[] = {12.01, 1.008, 16.00, 14.01};

double findMass(char element)
{
    switch(element){
        case 'C':
            return unit[0];
        case 'H':
            return unit[1];
        case 'O':
            return unit[2];
        case 'N':
            return unit[3];
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    

    while(T>0){
        double mass = 0;
        char buf[85];
        scanf("%s",buf);
        int len = strlen(buf);
        
        double currMass;
        int currDigits = 0;
        for(int i = 0; i<len; i++){
            if(!isdigit(buf[i])) {
                currMass = findMass(buf[i]);
                mass += currMass;
                currDigits = 0;
            } else {
                while(isdigit(buf[i])){
                    currDigits = currDigits*10 + buf[i]-'0';
                    i++;
                }
                mass += currMass*(currDigits-1);
                i--;
            }
        }

        printf("%.3f\n", mass);
        T--;
    }

    return 0;
}

