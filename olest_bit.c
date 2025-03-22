#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

int main(){
	unsigned long long a;
	int res;
	res = scanf("%llu", &a);
    if(a == 0){
        printf("NO \n");
        return 0;
    }
    int first = -1, last, counter = 0;
    unsigned long long power = 1;
    while(power<=a){
        if (a & power){
            first = (first == -1)? counter : first;
            last = counter;
        }
        power*=2;
        counter++;
    }
    printf("%d %d \n", last, first);
    return 0;
	
	
}
