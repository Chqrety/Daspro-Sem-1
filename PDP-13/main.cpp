#include <iostream>
#include <math.h>

using namespace std;

typedef struct koordinat {
    float x;
    float y;
} titik;

void makePoint(titik &t, float absis, float ordinat);

void tulis(titik t);
void bacaPoint(titik &t);

float getAbsis(titik t);
float getOrdinat(titik t);

void setAbsis(titik &t, float newx);
void setOrdinat(titik &t, float newy);

void cetakGaris();

bool isOrigin(titik t);
bool isOnSbX(titik t);
bool isOnSbY(titik t);
int kuadran(titik t);

void nextX(titik &t);
void nextY(titik &t);
void mirror(titik &t, char sumbu);
void geser(titik &t, float deltaX, float deltaY);
float jarakPusat(titik t);
float jarak2titik(titik t1, titik t2);

int main() {

    titik A;
    float a, b;
    cout << "Masukkan sumbu x = ";
    cin >> a;
    cout << "Masukkan sumbu y = ";
    cin >> b;
    makePoint(A, a, b);
    cout << "Titik A : ";
    tulis(A);
    cout << getAbsis(A) << " sebagai titik x atau absis" << endl;
    cout << getOrdinat(A) << " sebagai titik y atau ordinat" << endl;
    setOrdinat(A, 0);
    cout << "Proses setOrdinat(A, 0)" << endl;
    cout << "Titik A Baru: ";
    tulis(A);
    cout << "isOrigin(A) = " << isOrigin(A) << endl;
    cout << "isOnSbX(A) = " << isOnSbX(A) << endl;
    cout << "isOnSbY(A) = " << isOnSbY(A) << endl;

    cetakGaris();

    titik B;
    bacaPoint(B);
    cout << "Titik B : ";
    tulis(B);
    cout << getAbsis(B) << " sebagai titik x atau absis" << endl;
    cout << getOrdinat(B) << " sebagai titik y atau ordinat" << endl;
    cout << "isOrigin(B) = " << isOrigin(B) << endl;
    cout << "kuadran(B) = " << kuadran(B) << endl;
    cout << "nextX(B) = ";
    nextX(B);
    tulis(B);
    cout << "nextY(B) = ";
    nextY(B);
    tulis(B);
    cout << "mirror(B, 'x') = ";
    mirror(B, 'x');
    tulis(B);
    cout << "mirror(B, 'y') = ";
    mirror(B, 'y');
    tulis(B);
    cout << "geser(B, 2, 2) = ";
    geser(B, 2, 2);
    tulis(B);
    cout << "jarakPusat(B) = " << jarakPusat(B) << endl;
    cout << "jarak2titik(A, B) = " << jarak2titik(A, B) << endl;

    return 0;
}

void makePoint(titik &t, float absis, float ordinat) {
    t.x = absis;
    t.y = ordinat;
}

void tulis(titik t) {
    cout << "(" << t.x << "," << t.y << ")" << endl;
}

void bacaPoint(titik &t) {
    cout << "Masukkan nilai x: ";
    cin >> t.x;
    cout << "Masukkan nilai y: ";
    cin >> t.y;
}

float getAbsis(titik t) {
    return t.x;
}

float getOrdinat(titik t) {
    return t.y;
}

void setAbsis(titik &t, float newx) {
    t.x = newx;
}

void setOrdinat(titik &t, float newy) {
    t.y = newy;
}

void cetakGaris() {
    cout << "====================================" << endl;
}

bool isOrigin(titik t) {
    return (t.x == 0 && t.y == 0);
}

bool isOnSbX(titik t) {
    return t.y == 0;
}

bool isOnSbY(titik t) {
    return t.x == 0;
}

int kuadran(titik t) {
    if (t.x > 0 && t.y > 0) {
        return 1;
    } else if (t.x < 0 && t.y > 0) {
        return 2;
    } else if (t.x < 0 && t.y < 0) {
        return 3;
    } else if (t.x > 0 && t.y < 0) {
        return 4;
    } else {
        return -1;
    }
}

void nextX(titik &t) {
    t.x = getAbsis(t) + 1;
}

void nextY(titik &t) {
    t.y = getOrdinat(t) + 1;
}

void mirror(titik &t, char sumbu) {
    if (sumbu == 'x') {
        t.x = -t.x;
    } else if (sumbu == 'y') {
        t.y = -t.y;
    }
}

void geser(titik &t, float deltaX, float deltaY) {
    t.x += deltaX;
    t.y += deltaY;
}

float jarakPusat(titik t) {
    return sqrt(t.x * t.x + t.y * t.y);
}

float jarak2titik(titik t1, titik t2) {
    return sqrt(pow(t2.x - t1.x, 2) + pow(t2.y - t1.y, 2));
}
