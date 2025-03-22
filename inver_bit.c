#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

int main(){
	unsigned long long n;
	int res;
	res = scanf("%llu", &n);
	//assert(res == 1);
	//printf("%llu ########## \n", n);
	int * p = malloc(n* sizeof(int));
	for(unsigned long long i = 0; i<n; ++i){
		int t;
		
		res = scanf(" %d", &t);
		assert(res == 1);
		p[i] = t;
	}
	

	
	unsigned long long inv;
	scanf("%llu", &inv);
	for(unsigned long long i = 0; i<n; i++){
		if(inv/8 != i){
			printf("%d ", p[i]);
		}
		else{
			int power = 1;
			
			for(int j = 0; j<inv%8; ++j){
				power *=2;
				
			}
			
			printf("%d ", p[i] ^ power);
		}
	}
	printf("\n");
}
