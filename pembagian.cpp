#include<stdio.h>
#include<conio.h>

/*
	Program  	: Pembagian
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-oktober-2017
	Deskripsi 	: Program pencari pembagian
*/

main (){
	//Program utama
	//Dekalrasi variabel
	float iPertama,iKedua,fhasil;
	
	//Input
	printf("=== Program Pembagian === \n\n");
	printf("Masukan Bilangan Pertama = ");
	scanf("%f",&iPertama);
	printf("Masukan Bilangan Kedua = ");
	scanf("%f",&iKedua);

	//rumus
	fhasil=iPertama/iKedua;

	//output
	printf("Hasil dari pembagian adalah = %f",fhasil);
		
	getch();
}
