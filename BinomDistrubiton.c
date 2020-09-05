#include<stdio.h>
#include<math.h>

float ortalama (int denemeSayisi, float p);
float varyans (int denemeSayisi ,float p ,float q);
float carpiklik (float p , int denemeSayisi , float q );
float basiklik (float denemeSayisi ,float p ,float q);

int main (void){
	
	float denemeSayisi = 8 ;
	float p = 0.6 ;
	float q = 1-p ;
	
	printf("Basari olasiligi \t\t%f",p);
	printf("\nbasarisizlik olasiligi \t\t%f",q);
	printf("\nortalama \t\t\t%f",ortalama(denemeSayisi,p));
	printf("\nvaryans \t\t\t%f",varyans(denemeSayisi,p,q));
	printf("\ncarpiklik \t\t\t%f",carpiklik(p,denemeSayisi,q));
	printf("\nbasiklik \t\t\t%f",basiklik(denemeSayisi,p,q));
	
	
	return 0 ;
	
} 

float ortalama (int denemeSayisi, float p){
	return denemeSayisi*p ;
}

float varyans (int denemeSayisi ,float p ,float q){
	return denemeSayisi*p*q ;
}

float carpiklik (float p , int denemeSayisi , float q ){
	return (1-2*p)/ sqrt(varyans(denemeSayisi,p,q));
}

float basiklik (float denemeSayisi ,float p ,float q){
	return (1/varyans(denemeSayisi,p,q))-(6/denemeSayisi);
}







