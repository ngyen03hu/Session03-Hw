#include<stdio.h>

int main(){
	// tính diem cac mon
	float van;
	float toan;
	float anh; 
	float diemtong;
	float diemtb;
	
	printf("Moi ban nhap diem van :"); 
	scanf("%f",&van);  
	
	printf("Moi ban diem toan :");
	scanf("%f",&toan);
	
	printf("Moi ban diem anh :");
	scanf("%f",&anh); 
	
	diemtong = van + toan + anh;
	printf("tong diem cua 3 mon la: %.f\n",diemtong);
	
	diemtb = van + toan + anh /3;
	printf("diem trung binh la: %.2f\n",diemtb); 
	return 0; 
} 
