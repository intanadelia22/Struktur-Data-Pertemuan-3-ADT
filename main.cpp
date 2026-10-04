#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran p1 = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(p1);

    return 0;
}