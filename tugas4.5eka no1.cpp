#include <stdio.h>

int hitungLamaBekerja(int jamMasuk, int jamKeluar) {
    if (jamKeluar >= jamMasuk) {
        return jamKeluar - jamMasuk;
    } else {
        return (12 - jamMasuk) + jamKeluar;
    }
}

int main() {
    int jamMasuk, jamKeluar, lamaBekerja;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);

    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    lamaBekerja = hitungLamaBekerja(jamMasuk, jamKeluar);

    printf("Lama bekerja %d jam\n", lamaBekerja);

    return 0;
}


