#include <iostream>
#include <cmath>
#include <limits>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (cin.fail() || (y == (M_PI / 2) || y == -(M_PI / 2))) {
        cout << "������: ������������ ��������." << endl;
        return -1; // ������ �����
    }

    float r = (cos(M_PI * x) / sin(M_PI * x)) - (1 / cos(y));
    if (x <= 0) {
        cout << "������: x ������ ���� �������������." << endl;
        return -1; // ������ �����
    }

    float s = log(pow(2, x));
    float c = max(r, s);
    cout << c << endl;

    return 0;
}