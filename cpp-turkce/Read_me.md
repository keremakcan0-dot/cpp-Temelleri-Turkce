# C++ Programlama Alıştırmaları — Türkçe

**Yazar:** Kerem Akcan

## Açıklama

C++ öğrenenler için temel, ileri ve sınav odaklı çözülmüş alıştırma koleksiyonudur. Bütün kullanıcı metinleri, açıklamalar, fonksiyon/değişken adları ve dosya/klasör adları Türkçeleştirilmiştir. `int`, `cout`, `assert`, `#include` gibi C++ anahtar sözcükleri ve standart kütüphane adları dilin gereği olarak aynen bırakılmıştır.

Bu kodlar, notlar ve sorular UPV de egitim gorurken "programacion 1" dersine calisirken aldigim ve yazdigim notlar ve kodlarin yapay zeka ile duzenlenmis halidir.
 
## Çalışma önerisi

1. Önce üstteki **Açıklama** ve **Tasarım** satırlarını oku.
2. Programın ne yazacağını tahmin et.
3. Kodun akışını yorumlarla izle.
4. Değerleri değiştirip yeniden çalıştır.
5. Son olarak yorumları kapatıp kodu kendi başına anlatmayı dene.

## Proje yapısı

| Klasör | İçerik |
| --- | --- |
| `01-temeller/` | Girdi/çıktı, koşullar, döngüler, ilk algoritmalar. |
| `02-temel-alistirmalar/` | Faktöriyel, asal sayılar, toplam ve diğer temel algoritmalar. |
| `03-ileri-alistirmalar/` | Diziler, sıralama, Fibonacci, Armstrong sayıları. |
| `04-sinavlar/` | Sınav uygulamaları ve soruların Türkçe sürümleri. |

`02-temel-alistirmalar/` ve `03-ileri-alistirmalar/` klasörlerinde `00-sorular.txt` bulunur. Diğer klasörlerde sorular kaynak yorumlarında veya uygulama materyallerinde açıklanır.

## Gereksinimler

- C++17 destekleyen bir derleyici (örneğin `g++`).
- Toplu denetim betiği için Linux, macOS, WSL veya Git Bash.

## Tek dosya derleme ve çalıştırma

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic 02-temel-alistirmalar/02-faktoriyel.cpp -o faktoriyel
./faktoriyel
```

Windows'ta derlenen dosyayı `faktoriyel.exe` olarak çalıştırabilirsiniz.

## Bütün dosyaları kontrol etme

```bash
bash tumunu-denetle.sh
```

Betiğin yaptığı işlemler: Bütün `.cpp` dosyalarını ayrı ayrı derler, `assert` içeren ve klavye girdisi istemeyenleri çalıştırır. Klavye girdisi bekleyen dosyalar yalnızca derlenir.

## Bilinmesi gerekenler

- Her `.cpp` dosyası kendi `main()` fonksiyonunu içerir. Dosyalar ayrı ayrı derlenmelidir.
- Dizi parametreleriyle beraber gerçek eleman sayısı da verilmelidir.
- Bazı alıştırmalarda veri boyutu ve tam sayı aralıkları sınırlıdır. Sınırlamalar kaynak yorumlarda açıklanır.
- Fonksiyon adları Türkçeleştirildiğinden eski dosya adlarıyla veya eski fonksiyon isimleriyle yapılmış çağrılar güncellenmelidir.

Bu çalışma C++ öğrenme sürecimin bir parçasıdır.

**İyi çalışmalar**

— Kerem Akcan
