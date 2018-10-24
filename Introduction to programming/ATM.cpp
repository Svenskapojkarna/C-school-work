// Johdatus Ohjelmointiin syksy 2017
// Kotitehtävä 5
// Aleksi Hytönen, 2462633



#include <stdio.h>
#include <windows.h>

// 50€ setelien määrä

int viisi(int nosto){
	
	int viisikymppiset = 0;
	
	while (nosto % 50 == 0 && nosto >= 50 || nosto % 20 != 0){
		
		viisikymppiset = viisikymppiset + 1;
		nosto = nosto - 50;
	}
	
	return (viisikymppiset);
	
}

// 20€ setelien määrä

int kaksi(int nosto){
	
	int kaksi = 0;
	
	
	while (nosto % 50 == 0 && nosto >= 50 || nosto % 20 != 0){
		
		nosto = nosto - 50;
	}
	
	
	while (nosto % 20 == 0 && nosto >=20 && nosto != 0){
		
		kaksi = kaksi + 1;
		nosto = nosto - 20;
		
	}
	
	return kaksi;
	
}

// Syötteen tarkistus

tarkistus(int valinta){
	
		while (valinta != 0 && valinta != 1){
		
		printf("Anna 0 tai 1: ");
		scanf("%d", &valinta);
		
	}
}
 
// Pankkitilin saldo joko näytölle tai kuitille
 
saldo(int nosto){
	
	int viis = viisi(nosto);
	int kaks = kaksi(nosto);
	int kuitti;
	
	printf("Haluatko saldon naytolle vai kuitille? (Naytolle = 0, Kuitille = 1): ");
	scanf("%d", &kuitti);
	
	tarkistus(kuitti);
	
	if(kuitti == 0){
		
		printf("Ota kortti. \n");
		Sleep(3000);
		printf("Ota rahat. \n 50e x %d\n 20e x %d\n", viis, kaks );
		Sleep(3000);
		printf("saldosi on paljon. \n");
		
		return 0;
		
	}
	
		printf("Ota kortti. \n");
		Sleep(3000);
		printf("Ota rahat. \n 50e x %d\n 20e x %d\n", viis, kaks );
		Sleep(3000);
		printf("Ota kuitti. \n");
		
		return 0;
	
}

// Pankkitililtä nosto

nosto(){
	
	int nosto;
	
	printf("Kerro nostettava summa: ");
	scanf("%d", &nosto);
	
	while (nosto < 20){
		
		printf("Virheellinen summa. summa pitaa olla vahintaan 20e, 40e tai enemman ja sen pitaa olla jaollinen 10.\n Lisaksi maksiminosto 1000e.\n Kerro summa uudestaan: ");
		scanf("%d", &nosto);
		
	}
		
	while (nosto % 10 != 0){
			
		printf("Virheellinen summa. summa pitaa olla vahintaan 20e, 40e tai enemman ja sen pitaa olla jaollinen 10.\n Lisaksi maksiminosto 1000e.\n Kerro summa uudestaan: ");
		scanf("%d", &nosto);
			
	}
		
	while (nosto > 1000){
			
		printf("Virheellinen summa. summa pitaa olla vahintaan 20e, 40e tai enemman ja sen pitaa olla jaollinen 10.\n Lisaksi maksiminosto 1000e.\n Kerro summa uudestaan: ");
		scanf("%d", &nosto);
			
	}
		
	while (nosto == 30){
			
		printf("Virheellinen summa. summa pitaa olla vahintaan 20e, 40e tai enemman ja sen pitaa olla jaollinen 10.\n Lisaksi maksiminosto 1000e.\n Kerro summa uudestaan: ");
		scanf("%d", &nosto);
			
	}
		
	
	
	
	saldo(nosto);
	return 0;
	
}

// Pankkitilin toiminnot
	
toiminnot(){
	
	int valinta;
	
	printf("Nosto vai saldo?  (Nosto = 0, Saldo = 1): ");
	scanf("%d", &valinta);
	
    valinta = tarkistus(valinta);
	
	if (valinta == 0){
	
		nosto();
		return 0;
		
	}
		
}

// Ohjelman käynnistys

int main (void){
	
	int koodi;
	
	printf("Anna pin-koodi: ");
	scanf("%d", &koodi);
	
	toiminnot();
	
	return 0;
	
	
	
}
