#include <stdio.h>

int isPerfect(int n);
void printPerfect(int n);

int main(){
	int a, b, len = 0;
	scanf("%d %d", &a, &b);
	for(; a <= b; a++){
		if(isPerfect(a) == 1){
			printPerfect(a);
			printf("\n");
			len++;
		}else{
			continue;
		}
	}
	printf("The total number is %d.", len);
	return 0;
}


void printPerfect(int n){
	int res = 0;
	double div, div2, save, end;
	printf("%d=", n);
	
	for(int g = 1; g <= n - 1; g++){//1, 
		div = (double)n / g;
		if(div == (int)div){
			end = g;
		}
	}
	
	for(int i = 1; i <= n - 1; i++){//1, 
		div = (double)n / i;
		if(div == (int)div){
			printf("%d", i);
			if(end == i){
				break;
			}else{
				printf("+");
			}
		}
	}
}

int isPerfect(int n){//6
	int res = 0;
	double div;
	for(int i = 1; i <= n - 1; i++){//1, 
		div = (double)n / i;//div = 6 / 1  = 6, 6 / 2 = 3, 6 / 3 = 2, 6 / 4 = 1.5 
		if(div == (int)div){//5.0 == 5 3.0 == 3 2.0 == 2 1.5 != 2
			res += i;//res = 1, 2, 3
		}
	}
	if(n == res){
		return 1;
	}else{
		return 0;
	}
}
