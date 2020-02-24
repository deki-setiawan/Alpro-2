#include<stdio.h>


	
	int array[11]={1,2,3,4,5,6,7,8,9,10};
	int menu;
	int input= 0;
	int found= 0;
	int counter= 0;
	int cari;
int main(){
	
do{
	
	printf("Menu : \n");
	printf("1. Sequential Search dengan Var Logika\n");
	printf("2. Sequential Search tanpa Var Logika\n");
	printf("3. Sentinel Search \n");
	
	printf("Masukkan nomor menu : ");
	scanf("%d", &menu);
	switch(menu){
	case 1	:{
		printf("\n1. Sequential Search tanpa Var Logika\n");
		scanf("%d", &cari);
		while((input<10) && (found==0)){
			if(array[input] == cari){
				found =1;
			}
			input++;
		}
		if(counter == 1){
			printf("Data ditemukan indeks ke-%d\n", input);
		}else{
			printf("Data tidak ditemukan");
		}
		break;
	 }
	 
	 case 2 :{
	 	printf("\n2. Sequential Search dengan Var Logika\n");
	 	scanf("%d", & cari);
	 	while((input<10) && (array[input] !=cari)){
	 		input++;
		 }
		 if(array[input]==cari){
		 	printf("Data ditemukan di baris ke %d\n", input+1);
		 }else{
		 	printf("Tidak ditemukan");
		 }
		 break;
	}
	case 3 :{
		printf("\n3. Sentinel Search \n");
		scanf("%d",&cari);
		array[11]=cari;
		input = 0;
		while(array[input] !=cari){
			input++;
		}
		if(input != 11){
			printf("Data ditemukan di-%d\n",input);
		}else{
			printf("Data tidak ditemukan");
		}
		break;
	}
	}}	while ((menu <! 4) || (1 <! menu));
  		return 0;
}

