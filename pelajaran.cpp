#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namaPel, string kodePel) {
    pelajaran p;

    p.namaPel = namaPel;
    p.kodeMapel = kodePel;

    return p;
}

void tampil_pelajaran(pelajaran p) {
    cout << "nama pelajaran : " << p.namaPel << endl;
    cout << "nilai          : " << p.kodeMapel << endl;
}