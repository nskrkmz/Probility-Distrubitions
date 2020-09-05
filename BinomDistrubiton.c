#include<stdio.h>
#include<math.h>

float binom_ortalama (int denemeSayisi, float p);
float binom_varyans (int denemeSayisi ,float p ,float q);
float binom_carpiklik (float p , int denemeSayisi , float q );
float binom_basiklik (float denemeSayisi ,float p ,float q);

int main (void){
	
	float denemeSayisi = 8 ;
	float p = 0.6 ;
	float q = 1-p ;
	
	printf("Basari olasiligi \t\t%f",p);
	printf("\nbasarisizlik olasiligi \t\t%f",q);
	printf("\nortalama \t\t\t%f",binom_ortalama(denemeSayisi,p));
	printf("\nvaryans \t\t\t%f",binom_varyans(denemeSayisi,p,q));
	printf("\ncarpiklik \t\t\t%f",binom_carpiklik(p,denemeSayisi,q));
	printf("\nbasiklik \t\t\t%f",binom_basiklik(denemeSayisi,p,q));
	
	
	return 0 ;
	
} 

float binom_ortalama (int denemeSayisi, float p){
	return denemeSayisi*p ;
}

float binom_varyans (int denemeSayisi ,float p ,float q){
	return denemeSayisi*p*q ;
}

float binom_carpiklik (float p , int denemeSayisi , float q ){
	return (1-2*p)/ sqrt(binom_varyans(denemeSayisi,p,q));
}

float binom_basiklik (float denemeSayisi ,float p ,float q){
	return (1/binom_varyans(denemeSayisi,p,q))-(6/denemeSayisi);
}







