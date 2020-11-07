#include<stdio.h>

// Bernoulli's Functions
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

// Binom's Functions
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
