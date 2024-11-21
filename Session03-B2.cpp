#include<stdio.h>

int main (){
	float C;
	printf("Moi ban nhap nhiet Celsius ");
	scanf ("%f",&C);
	float F;
	
	F = C * 9/5 + 32;
	printf(" Nhien do  Fahrenheit la: %2f\n",F);
	return 0; 
}
