#include<stdio.h>

int main(){
	// tinh chu vvi va dien tich hinh tron
	float PI = 3.14;
	float r; // ban kinh cau hinh tron nguoi dung nhap vao
	printf("MOI ban nhap so r");
	scanf("%f",&r); 
	float C, S ;
	
	C = 2 * PI * r ;
	printf("chu vi hinh tron la : %0.2f\n",C); 
	 
	S =  PI * r * r;
	printf("dien tich hinh tron la %0.2f\m",S);
	
	
	return 0; 
}
