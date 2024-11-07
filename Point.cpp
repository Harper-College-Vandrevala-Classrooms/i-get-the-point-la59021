#include <iostream>
#include <cmath>
#include "Point.hpp"
using namespace std;

point::point() : x(0), y(0) {}
point::point(double newX, double newY) : x(newX), y(newY) {}

void point::pp() {
    cout << "the point is at (" << this->x << ", " << this->y << ")" << endl;
}

double point::operator-(point p1) {
    double xdif = pow(this->x - p1.x, 2);
    double ydif = pow(this->y - p1.y, 2);
    return sqrt(xdif + ydif);
}   
double point::distance(point p1) {
    double xdif = pow(this->x - p1.x, 2);
    double ydif = pow(this->y - p1.y, 2);
    return sqrt(xdif + ydif);
}

bool point::operator==(point p1) {
    if (this->x == p1.x && this->y == p1.y) {
        return true;
    }
    return false;
}
bool point::same(point p1) {
    if (this->x == p1.x && this->y == p1.y) {
        return true;
    }
    return false;
}

bool point::operator!=(point p1) {
    if (this->x != p1.x || this->y != p1.y) {
        return true;
    }
    return false;
}
bool point::notSame(point p1) {
    if (this->x != p1.x || this->y != p1.y) {
        return true;
    }
    return false;
}

point point::operator/(point p1) {
    double xsum = (this->x + p1.x) / 2;
    double ysum = (this->y + p1.y) / 2;
    return point(xsum, ysum);
}
point point::midpoint(point p1) {
    double xsum = (this->x + p1.x) / 2;
    double ysum = (this->y + p1.y) / 2;
    return point(xsum, ysum);
}