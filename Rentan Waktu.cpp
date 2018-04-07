#include<stdio.h>
#include<conio.h>

/*
	Program  	: Pencari rentam waktu
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Rentan waktu sudah diketahui
*/

main ()
{
	//program utama
	//deksripsi variabel
	float jarak,kecepatan,waktu;
	
	//Masukan	
	printf("Masukan nilai jarak = ");
	scanf("%f",&jarak);
	
	printf("Masukan nillai Kecepatan = " );
	scanf("%f",&kecepatan);
	
	//Rumus
	waktu=jarak/kecepatan;

	//hasil
	printf("Rentan Waktunya adalah = %f",waktu);
}
