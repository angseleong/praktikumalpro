#include <stdio.h>
#include <math.h>
#include <float.h>

double gradient(double x1, double y1, double x2, double y2) {
    if (x2 - x1 == 0) return 1e18; // vertikal, gradien tak terhingga
    return (y2 - y1) / (x2 - x1);
}

// nyari titik potong x dari dua persamaan garis
// y = m1*(x-x1)+y1  dan  y = m2*(x-x3)+y3
double cari_x_potong(double m1, double x1, double y1, double m2, double x3, double y3) {
    // m1*(x-x1)+y1 = m2*(x-x3)+y3
    // m1*x - m1*x1 + y1 = m2*x - m2*x3 + y3
    // x*(m1-m2) = m1*x1 - y1 - m2*x3 + y3  (salah)
    // x*(m1-m2) = (m2*x3 - y3) - (m1*x1 - y1)  (salah)
    // m1*x - m2*x = m1*x1 - y1 - m2*x3 + y3 <- bener
    return (m1*x1 - y1 - m2*x3 + y3) / (m1 - m2);
}

// masukin x potong ke salah satu persamaan buat dapet y
double cari_y_potong(double m, double x_potong, double x1, double y1) {
    // y - y1 = m*(x - x1)
    // y = m*(x_potong - x1) + y1
    return m * (x_potong - x1) + y1;
}

double hitung_jarak(double px, double py, double ex, double ey) {
    double a = px - ex;
    double b = py - ey;
    return sqrt(a*a + b*b);
}

// return 1 kalo berpotongan, 0 kalo paralel
int perpotongan(double x1, double y1, double x2, double y2,
                double x3, double y3, double x4, double y4,
                double *px, double *py) {

    double m1 = gradient(x1, y1, x2, y2);
    double m2 = gradient(x3, y3, x4, y4);

    if (m1 == m2) return 0; // paralel, skip

    // kasus garis 1 vertikal: x potong = x1
    if (x2 - x1 == 0) {
        *px = x1;
        *py = cari_y_potong(m2, x1, x3, y3);
        return 1;
    }

    // kasus garis 2 vertikal: x potong = x3
    if (x4 - x3 == 0) {
        *px = x3;
        *py = cari_y_potong(m1, x3, x1, y1);
        return 1;
    }

    *px = cari_x_potong(m1, x1, y1, m2, x3, y3);
    *py = cari_y_potong(m1, *px, x1, y1);
    return 1;
}

int main() {
    double ax, ay, bx, by, cx, cy, dx, dy, ex, ey;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
          &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &ex, &ey);

    double px, py, d;
    double min_jarak = DBL_MAX;

    // kombinasi 1: AB & CD
    if (perpotongan(ax,ay, bx,by, cx,cy, dx,dy, &px,&py)) {
        d = hitung_jarak(px, py, ex, ey);
        if (d < min_jarak) min_jarak = d;
    }

    // kombinasi 2: AC & BD
    if (perpotongan(ax,ay, cx,cy, bx,by, dx,dy, &px,&py)) {
        d = hitung_jarak(px, py, ex, ey);
        if (d < min_jarak) min_jarak = d;
    }

    // kombinasi 3: AD & BC
    if (perpotongan(ax,ay, dx,dy, bx,by, cx,cy, &px,&py)) {
        d = hitung_jarak(px, py, ex, ey);
        if (d < min_jarak) min_jarak = d;
    }

    printf("%.2f\n", min_jarak);
    return 0;
}