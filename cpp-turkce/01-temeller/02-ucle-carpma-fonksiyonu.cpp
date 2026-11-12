// Soru: Verilen sayının üç katını döndüren bir fonksiyon tasarlayınız.
// Kodun yaptığı: Bir sayıyı alıp üçün katını döndüren fonksiyon.

// Tasarım: sayi ---> ucleCarp() ---> sayi * 3

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
// Standart kütüphanenin isimlerini std:: öneki olmadan kullanırız.
using namespace std;

// double ondalıklı sayı tutar. Fonksiyon parametre alır ve bir sonuç döndürür.
double ucleCarp(double sayi) {
    // return, hesaplanan değeri fonksiyonu çağıran yere gönderir.
    return sayi * 3;
}

int main() {
    double sayi;
    cout << "Bir sayı yazınız: ";
    cin >> sayi;
    // Fonksiyon çağrısı, ekrana yazdırma işleminin içinde de kullanılabilir.
    cout << "Sonuç: " << ucleCarp(sayi) << endl;
    return 0;
}
