#include<stdio.h>
int main () {
	int array1[100];
	int array2[100];
	int a, b, c, d, cari;
	
	// Semua Masukan Jumlah Input
	scanf("%d", &a);
	// Nilai dari jumlah Input Yang dimasukan
	for (c = 0; c < a; c++) {
		scanf("%d", &array1[c]);
	}
	
	// Semua Masukan Jumlah Input yang akan di cari
	scanf("%d", &b);
	// Nilai dari jumlah input yang akan di cari
	for (d = 0; d < b; d++) {
		scanf("%d", &array2[d]);
	}
	
	// Hasil
	d = 0;
	
	do {
		for (c = 0; c < a; c++) {
			if (array2[d] == array1[c]) {
				cari = 1;
				break;
			} else {
				cari = 0;
			}
		}
		if (cari == 1) {
			printf("Ditemukan\n");
		} else {
			printf("Tidak Ditemukan\n");
		}
		d++;
	} while (d < b);

	return 0;
}
