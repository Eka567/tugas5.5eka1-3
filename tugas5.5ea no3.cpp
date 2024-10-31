#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk: ");
    scanf("%d", &jam_masuk);

    printf("Masukkan jam keluar: ");
    scanf("%d", &jam_keluar);

    // Menghitung lama parkir
    if (jam_keluar >= jam_masuk) {
        lama_parkir = jam_keluar - jam_masuk;
    } else {
        lama_parkir = (24 - jam_masuk) + jam_keluar;  // Jika parkir melewati tengah malam
    }

    // Menghitung biaya parkir
    if (lama_parkir <= 2) {
        biaya = 2000;  // Biaya tetap 2000 untuk 2 jam pertama
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;  // Biaya tambahan 500 per jam setelah 2 jam pertama
    }

    // Menampilkan hasil
    printf("Jam masuk: %d\n", jam_masuk);
    printf("Jam keluar: %d\n", jam_keluar);
    printf("Lama parkir: %d jam\n", lama_parkir);
    printf("Biaya parkir: %d\n", biaya);

    return 0;
}
