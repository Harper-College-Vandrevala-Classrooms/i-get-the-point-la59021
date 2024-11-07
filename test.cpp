#include <cassert>
#include <cmath>
#include "Point.hpp"
using namespace std;

int main() {

    point p1(-1, -1);
    point p2(0, 0);
    point p3(1, 1);
    point p4(4, 5);
    point p5(75, 64);
    point p6(1.6, 6.2);
    point p7(43.9, 41);
    point p8(40, 10000);
    point p9(0.1, 0.43);
    point p10(8.9, 54.6);

    double Xs[10] = {p1.x, p2.x, p3.x, p4.x, p5.x, p6.x, p7.x, p8.x, p9.x, p10.x};
    double Ys[10] = {p1.y, p2.y, p3.y, p4.y, p5.y, p6.y, p7.y, p8.y, p9.y, p10.y};

    double distances[10] = {};
    for (int i = 0; i < 10; i++) {
        distances[i] = sqrt(pow(Xs[0] - Xs[i], 2) + pow(Ys[0] - Ys[i], 2));
    }

    double midXs[10] = {};
    for (int i = 0; i < 10; i++) {
        midXs[i] = (Xs[0] + Xs[i]) / 2;
    }

    double midYs[10] = {};
    for (int i = 0; i < 10; i++) {
        midYs[i] = (Ys[0] + Ys[i]) / 2;
    }

    assert((p1 - p1) == distances[0]);
    assert((p2 - p1) == distances[1]);
    assert((p3 - p1) == distances[2]);
    assert((p4 - p1) == distances[3]);
    assert((p5 - p1) == distances[4]);
    assert((p6 - p1) == distances[5]);
    assert((p7 - p1) == distances[6]);
    assert((p8 - p1) == distances[7]);
    assert((p9 - p1) == distances[8]);
    assert((p10 - p1) == distances[9]);

    assert(p1.distance(p1) == distances[0]);
    assert(p2.distance(p1) == distances[1]);
    assert(p3.distance(p1) == distances[2]);
    assert(p4.distance(p1) == distances[3]);
    assert(p5.distance(p1) == distances[4]);
    assert(p6.distance(p1) == distances[5]);
    assert(p7.distance(p1) == distances[6]);
    assert(p8.distance(p1) == distances[7]);
    assert(p9.distance(p1) == distances[8]);
    assert(p10.distance(p1) == distances[9]);

    assert((p1 == p1) == true);
    assert((p2 == p1) == false);
    assert((p3 == p1) == false);
    assert((p4 == p1) == false);
    assert((p5 == p1) == false);
    assert((p6 == p1) == false);
    assert((p7 == p1) == false);
    assert((p8 == p1) == false);
    assert((p9 == p1) == false);
    assert((p10 == p1) == false);

    assert(p1.same(p1) == true);
    assert(p2.same(p1) == false);
    assert(p3.same(p1) == false);
    assert(p4.same(p1) == false);
    assert(p5.same(p1) == false);
    assert(p6.same(p1) == false);
    assert(p7.same(p1) == false);
    assert(p8.same(p1) == false);
    assert(p9.same(p1) == false);
    assert(p10.same(p1) == false);

    assert((p1 != p1) == false);
    assert((p2 != p1) == true);
    assert((p3 != p1) == true);
    assert((p4 != p1) == true);
    assert((p5 != p1) == true);
    assert((p6 != p1) == true);
    assert((p7 != p1) == true);
    assert((p8 != p1) == true);
    assert((p9 != p1) == true);
    assert((p10 != p1) == true);

    assert(p1.notSame(p1) == false);
    assert(p2.notSame(p1) == true);
    assert(p3.notSame(p1) == true);
    assert(p4.notSame(p1) == true);
    assert(p5.notSame(p1) == true);
    assert(p6.notSame(p1) == true);
    assert(p7.notSame(p1) == true);
    assert(p8.notSame(p1) == true);
    assert(p9.notSame(p1) == true);
    assert(p10.notSame(p1) == true);

    assert(p1 / p1 == point(midXs[0], midYs[0]));
    assert(p2 / p1 == point(midXs[1], midYs[1]));
    assert(p3 / p1 == point(midXs[2], midYs[2]));
    assert(p4 / p1 == point(midXs[3], midYs[3]));
    assert(p5 / p1 == point(midXs[4], midYs[4]));
    assert(p6 / p1 == point(midXs[5], midYs[5]));
    assert(p7 / p1 == point(midXs[6], midYs[6]));
    assert(p8 / p1 == point(midXs[7], midYs[7]));
    assert(p9 / p1 == point(midXs[8], midYs[8]));
    assert(p10 / p1 == point(midXs[9], midYs[9]));

    assert(p1.midpoint(p1) == point(midXs[0], midYs[0]));
    assert(p2.midpoint(p1) == point(midXs[1], midYs[1]));
    assert(p3.midpoint(p1) == point(midXs[2], midYs[2]));
    assert(p4.midpoint(p1) == point(midXs[3], midYs[3]));
    assert(p5.midpoint(p1) == point(midXs[4], midYs[4]));
    assert(p6.midpoint(p1) == point(midXs[5], midYs[5]));
    assert(p7.midpoint(p1) == point(midXs[6], midYs[6]));
    assert(p8.midpoint(p1) == point(midXs[7], midYs[7]));
    assert(p9.midpoint(p1) == point(midXs[8], midYs[8]));
    assert(p10.midpoint(p1) == point(midXs[9], midYs[9]));

    cout << "All tests Passed\n";
    return 0;
}