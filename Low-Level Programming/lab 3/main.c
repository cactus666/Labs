#include <stdio.h>
//#include <stdlib.h>

int array1[] = {1,2,3,4,5,6,7,8,9,10};
int array2[] = {1,2,3,4,5,6,7,8,9,10};
//char in[128];

int sum(int size){
	int res=0;
	for(int i=0; i<=size; i++){
		res=res+array1[i]*array2[i];
	}
	return res;
}

int is_prime(unsigned long n){			
	for(unsigned long del=2; del<n; del++){	
		if(n%del==0){
			return 0;
		}	
	}
	return 1;
}

/*
int volidet(char array[128]){
	for(int i=0; i<128; i++){
		if(in[i]){
			if((in[i]<48) | (in[i]>58)){
				return 0;
			}
		}
	}
	return 1;	
}	
*/

int main() {
	int size=sizeof(array1)/sizeof(int);
	
	printf("Sum=%d\n",sum(size));
/*	
	unsigned long arg = 0; 
	while(1){ 
		printf("Enter the number!\n"); 
		scanf("%s", in); 
		
		if(volidet(in)){
			arg = strtoul(in, NULL, 0); 
			break;
		}	
		printf("Try again!\n"); 
	} 
*/
	unsigned long arg = 0; 
	scanf("%lu", &arg);
	
	if(is_prime(arg)){
		printf("Yes\n");
	}else{
		printf("No\n");
	}	
  
	return 0;
}
