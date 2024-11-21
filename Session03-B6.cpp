#include<stdio.h>

int main(){
	float a;// do dai 
	float b; // chieu cao 
	float S; // dien tich
	
	printf("Moi ban nhap do dai cua tam giac :");
	scanf("%f",&a);
	
	printf("Moi ban nhap chieu cao cua tam giac :");
	scanf("%f",&b);
	
	S = 1/2 + a + b;
	printf("dien tich cua tam giac là : %.01f\n",S); 
	
	return 0; 
} 
