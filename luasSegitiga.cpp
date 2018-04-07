#include<stdio.h>
#include<conio.h>


/*
	Program  	: Luas Segitiga
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Program pencari luas segitiga
*/

main(){
	//Program Utama
	//Deklarasi Variabel
	float luas,a,t;

	//Input
	printf("Masukan Nilai Alas Segitiga = ");
	scanf("%f",&a);
	printf("Masukan NIlai Tinggi Segitiga = ");
	scanf("%f",&t);

	//Rumus 
	luas=0.5*a*t;

	//output
	printf("Hasinya adalah = %f",luas);
}

