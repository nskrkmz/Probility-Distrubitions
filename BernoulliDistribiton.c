#include<stdio.h>
#include<math.h>


//represantation of function

float bernoulli_ortalama (float p);
float bernoulli_varyans (float p ,float q);
float bernoulli_carpiklik (float p,float q);
float bernoulli_basiklik(float p ,float q);
float bernoulli_standartSapma (float p, float q);
float bernoulli_pmf (float p , float q, float x);

// main baþlangýcý
int main (void){
	float p = 0.4 ; //basari olasýðý
	float q = 1-p ; //basarili olmama olasiligi
	float x=5 ;// pmf içinn deneme sayisi 
	printf("Basari olasiligi \t\t%f",p);
	printf("\nbasarisizlik olasiligi \t\t%f",q);
	printf("\nortalama \t\t\t%f",bernoulli_ortalama(p));
	printf("\nvaryans \t\t\t%f",bernoulli_varyans(p,q));
	printf("\nstandart sapma \t\t\t%f",bernoulli_standartSapma(p,q));
	printf("\nOlasilik kutle fonsiyonu \t%f", bernoulli_pmf(p,q,x));
	printf("\ncarpiklik \t\t\t%f",bernoulli_carpiklik(p,q));
	printf("\nbasiklik \t\t\t%f",bernoulli_basiklik(p,q));
	
	return 0 ;
}// main fonksiyonu sonu

//defination of funtions


float bernoulli_ortalama (float p) {
	return p ;
}

float bernoulli_varyans (float p ,float q){
	return p*q ;
}

float bernoulli_standartSapma (float p, float q){
	return sqrt(bernoulli_varyans(p,q)) ;
}

float bernoulli_carpiklik (float p,float q) {
	return (1-2*p)/sqrt(bernoulli_varyans( p ,q));
}

float bernoulli_basiklik(float p ,float q) {
	return (1/bernoulli_varyans(p,q)-6) ;
}

float bernoulli_pmf (float p,float q , float x){
	return (pow(p,x)* pow(q,1-x));
}
