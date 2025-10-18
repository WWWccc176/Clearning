#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

typedef vector<double> Vec;
typedef vector<Vec> Base;
double Inner(Vec& v1, Vec& v2, int32_t n) {
    double res = 0;
    for (int32_t i = 0; i < n; i++) {
        res += v1[i] * v2[i];
    }
    return res;
}
double Proj(Vec& v1, Vec& v2, int32_t n) {
    return Inner(v1, v2, n) / Inner(v2, v2, n);
}
void GramSchmidt(Base& dst, Base& src, int32_t n) {
    for (int32_t i = 0; i < n; i++) {
        dst[i] = src[i];
        for (int32_t j = 0; j < i; j++) {
            double mu = Proj(dst[i], dst[j], n);
            for (int32_t k = 0; k < n; k++) {
                dst[i][k] -= mu * dst[j][k];
            }
        }
    }
}
void LLL(Base& dst, Base& src, int32_t n, double delta = 0.75) {
    if (dst != src) {
        dst = src;
    }
    Base B(n, Vec(n));
    int32_t k = 1;
    while (k < n) {
        for (int32_t j = k - 1; j >= 0; j--) {
            double mu = round(Proj(dst[k], B[j], n));
            for (int32_t l = 0; l < n; l++) {
                dst[k][l] -= mu * B[j][l];
            }
        }
        GramSchmidt(B, dst, n);
        double mu = Proj(dst[k], B[k - 1], n);
        if (Inner(B[k], B[k], n) >= (delta - mu * mu) * Inner(B[k - 1], B[k - 1], n)) {
            k++;
        }
        else {
            swap(dst[k], dst[k - 1]);
            k = max(k - 1, 1);
        }
    }
}
int main() {
    int32_t n = 3;
    Base B1(n, Vec(n));
    // 初始化基向量
    B1[0] = { 4.0, 1.0, 3.0 };
    B1[1] = { 2.0, 1.0, 1.0 };
    B1[2] = { 1.0, 3.0, 2.0 };
    Base B2;
    LLL(B2, B1, n);
    for (const auto& vec : B2) {
        for (double val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}