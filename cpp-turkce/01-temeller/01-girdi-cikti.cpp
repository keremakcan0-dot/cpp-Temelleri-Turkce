// Soru: Kullanıcıdan bir tam sayı alıp bir artırarak ekrana yazdıran programı yazınız.
// Kodun yaptığı: Kullanıcıdan bir sayı alır, 1 ekler ve ekrana yazdırır.

// Tasarım: girilenSayi ---> +1 ---> sonuc

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream> // iostream, cin ve cout gibi giriş/çıkış araçlarını kullanmamızı sağlar.
using namespace std;  // std:: yazmadan cout ve cin kullanabilmek içindir.

// Program çalışmaya main() fonksiyonundan başlar.
int main() {
    // int, tam sayı saklamak için kullanılır.
    int girilenSayi;
    // cout, ekrana yazı yazdırır; << ile gönderilecek metni belirtir.
    cout << "Lütfen bir sayı giriniz: ";
    // cin, klavyeden girilen değeri değişkene aktarır.
    cin >> girilenSayi;
    // ++ işleci sayının değerini bir artırır.
    girilenSayi++;
    cout << "Sonuç: " << girilenSayi << endl;
    // main fonksiyonundan 0 döndürmek, programın normal bittiğini belirtir.
    return 0;
}
