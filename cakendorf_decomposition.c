#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
unsigned long long fibona4os( int x)
{   
    long long p = 1, v = 1, temp, counter = 1;
    unsigned long long answer = 0;
    int flag = 1;
    while(p<=x){
        temp = p;
        p +=v;
        v = temp;
        counter++;
    }
    while(counter!=0){
        if(x >= p){
            printf("1");
            x = x-p;
            flag = 0;
        }
        else if(flag != 1){
            printf("0");
            
        }
        
        temp = v;
        v = p-v;
        p = temp; 
        counter--;
    }

    printf("\n");



    return answer;
}




int main() {
    long long x;
    unsigned long long g;
    int res;
    res = scanf("%lld", &x);
    
    
    assert(res == 1);
    g = fibona4os(x);
    
    return 0;
}