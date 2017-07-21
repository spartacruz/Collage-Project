#include <stdio.h>

/* ***********************************************************
Algoritma Angka_Terbalik
Deskripsi : Memunculkan angka secara terbalik

IS	: layak kosong, user siap memasukan 3 angka integer
FS	: 3 angka integer tampil dilayar dalam keadaaan terbalik

Dibuat oleh : Yuri Iskandia Barru
Tanggal		: 29 september 2015
*********************************************************** */

void main (void)

{ 	int a, b, c;

	printf ("Silahkan masukkan Bilangan Bulat yang pertama = ");
	scanf ("%d", &a);
	printf ("\nSilahkan masukkan Bilangan Bulat yang kedua = ");
	scanf ("%d", &b);
	printf ("\nSilahkan masukkan Bilangan Bulat yang ketiga = ");
	scanf ("%d", &c);
	
	printf ("\n\nAngka dengan urutan terbalik = %d %d %d\n\n", c, b, a);
	system ("PAUSE");
}
