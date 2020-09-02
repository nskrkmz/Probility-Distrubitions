#include<stdio.h>
#include<math.h>


//represantation of function

float ortalama (float p);
float varyans (float p ,float q);
float carpiklik (float p,float q);
float basiklik(float p ,float q);


// main baþlangýcý
int main (void){
	float p = 0.4 ;
	float q = 1-p ;
	
	
	printf("ortalama \t%f",ortalama(p));
	printf("\nvaryans \t%f",varyans(p,q));
	printf("\ncarpiklik \t%f",carpiklik(p,q));
	printf("\nbasiklik \t%f",basiklik(p,q));
	
	return 0 ;
}// main fonksiyonu sonu

//defination of funtions


float ortalama (float p) {
	return p ;
}

float varyans (float p ,float q){
	return p*q ;
}

float carpiklik (float p,float q) {
	return (1-2*p)/sqrt(varyans( p ,q));
}

float basiklik(float p ,float q) {
	return (1/varyans(p,q)-6) ;
}
