#include <cassert>
#include <cmath>
#include "Point.hpp"
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    cout << endl << endl;

    point a(x1, y1);
    point b(x2, y2);

    cout << "The distance between the point is " << a - b << " or " << b.distance(a) << endl;

    string caseA = (a == b) ? "True" : "False";
    string caseB = (b.same(a)) ? "True" : "False";
    cout << "The statement \"these points are the same\" is " << caseA << " or " << caseB << endl;

    string caseC = (a != b) ? "True" : "False";
    string caseD = (b.notSame(a)) ? "True" : "False";
    cout << "The statement \"these points are not the same\" is " << caseC << " or " << caseD << endl;

    cout << "The midpoint between the point is "; 
    (a / b).pp();
    cout << " or ";
    (b.midpoint(a)).pp();
    cout << endl;
    return 0;
}
