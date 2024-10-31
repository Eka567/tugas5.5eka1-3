#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, harga_diskon, diskon;

    // Input kode, jenis, dan harga
    printf("Masukkan kode barang: ");
    scanf("%d", &kode);

    printf("Masukkan jenis barang (A, B, C): ");
    scanf(" %c", &jenis);  // menggunakan spasi sebelum %c agar tidak mengambil karakter newline

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    // Menentukan diskon berdasarkan jenis
    switch(jenis) {
        case 'A':
            diskon = 0.10;  // Diskon 10%
            break;
        case 'B':
            diskon = 0.15;  // Diskon 15%
            break;
        case 'C':
            diskon = 0.20;  // Diskon 20%
            break;
        default:
            printf("Jenis barang tidak valid.\n");
            return 1;
    }

    // Menghitung harga setelah diskon
    harga_diskon = harga - (harga * diskon);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, harga_diskon);

    return 0;
}
