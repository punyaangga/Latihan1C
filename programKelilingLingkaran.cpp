#include<stdio.h>
#include<conio.h>


/*
	Program  	: Keliling Lingkaran
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-10-2017
	Deskripsi 	: Program pencari keliling lingkaran
*/
#define rPhi 3.14159

main(){
	//Program utama
	//Deklarasi Variabel
	float r,keliling;
	
	//Input
	printf("Masukan Jari-Jari = ");
	scanf("%f",&r);
	
	//Rumus
	keliling=2*rPhi*r;
	
	//output
	printf("Keliling lingkarang adalah = %f",keliling);
	
}
