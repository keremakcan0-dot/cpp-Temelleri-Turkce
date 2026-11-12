// Soru: Kişi bilgilerini bir yapıda tutup yetişkinlik durumunu kontrol ediniz.
// Kodun yaptığı: Bir kişi yapısı tanımlar ve yaşının 18 ya da üstü olup olmadığını kontrol eder.

// Tasarım: dizi[Kisi] ---> yaşı kontrol et ---> konsol iletisi

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
// vector, uzunluğu değişebilen veri listeleri sunar.
#include <vector>
// string, metinleri saklamak için kullanılır.
#include <string>

using namespace std;

// struct, bir kişiye ait farklı türdeki bilgileri tek yapıda birleştirir.
struct Kisi {
    string ad;
    string soyad;
    int yas;
};

int main() {
    // vector, eleman sayısı değişebilen bir koleksiyondur.
    vector<Kisi> kisiler = {
        {"Ahmet", "soyad", 20},
        {"Mehmet", "babaci", 15},
        {"Zeynep", "mustafaoglu", 25},
        {"Bulent", "akcan", 60}
    };

    // Bu döngü listedeki kişileri tek tek gezer; const auto& kopyalama yapmadan okur.
    for (const auto& kisi : kisiler) {
        if (kisi.yas >= 18) {
            cout << kisi.ad << " " << kisi.soyad << ", " << kisi.yas << " yaşında: 18 yaş ve üzeri" << endl;
        } else {
            cout << kisi.ad << " " << kisi.soyad << ", " << kisi.yas << " yaşında: 18 yaş altı" << endl;
        }
    }

    return 0;
}
