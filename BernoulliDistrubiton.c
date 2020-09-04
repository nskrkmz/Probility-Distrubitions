#include<stdio.h>
#include<math.h>


//represantation of function

float ortalama (float p);
float varyans (float p ,float q);
float carpiklik (float p,float q);
float basiklik(float p ,float q);
float standartSapma (float p, float q);
float pmf (float p , float q, float x);

// main baþlangýcý
int main (void){
	float p = 0.4 ; //basari olasýðý
	float q = 1-p ; //basarili olmama olasiligi
	float x=5 ;// pmf içinn deneme sayisi 
	printf("Basari olasiligi \t\t%f",p);
	printf("\nbasarisizlik olasiligi \t\t%f",q);
	printf("\nortalama \t\t\t%f",ortalama(p));
	printf("\nvaryans \t\t\t%f",varyans(p,q));
	printf("\nstandart sapma \t\t\t%f",standartSapma(p,q));
	printf("\nOlasilik kutle fonsiyonu \t%f", pmf(p,q,x));
	printf("\ncarpiklik \t\t\t%f",carpiklik(p,q));
	printf("\nbasiklik \t\t\t%f",basiklik(p,q));
	
	return 0 ;
}// main fonksiyonu sonu

//defination of funtions


float ortalama (float p) {
	return p ;
}

float varyans (float p ,float q){
	return p*q ;
}

float standartSapma (float p, float q){
	return sqrt(varyans(p,q)) ;
}

float carpiklik (float p,float q) {
	return (1-2*p)/sqrt(varyans( p ,q));
}

float basiklik(float p ,float q) {
	return (1/varyans(p,q)-6) ;
}

float pmf (float p,float q , float x){
	return (pow(p,x)* pow(q,1-x));
}
