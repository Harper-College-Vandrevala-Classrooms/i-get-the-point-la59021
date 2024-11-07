#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class point{
    public:
        point() : x(0), y(0) {}
        point(double newX, double newY) : x(newX), y(newY) {}

        void pp() {
            cout << "(" << x << ", " << y << ")";
        }

        double operator-(point p1) {
            double xdif = pow(x - p1.x, 2);
            double ydif = pow(y - p1.y, 2);
            return sqrt(xdif + ydif);
        }   
        double distance(point p1) {
            double xdif = pow(x - p1.x, 2);
            double ydif = pow(y - p1.y, 2);
            return sqrt(xdif + ydif);
        }

        bool operator==(point p1) {
            if (x == p1.x && y == p1.y) {
                return true;
            }
            return false;
        }
        bool same(point p1) {
            if (x == p1.x && y == p1.y) {
                return true;
            }
            return false;
        }

        bool operator!=(point p1) {
            if (x != p1.x || y != p1.y) {
                return true;
            }
            return false;
        }
        bool notSame(point p1) {
            if (x != p1.x || y != p1.y) {
                return true;
            }
            return false;
        }

        point operator/(point p1) {
            double xsum = (this->x + p1.x) / 2;
            double ysum = (this->y + p1.y) / 2;
            return point(xsum, ysum);
        }
        point midpoint(point p1) {
            double xsum = (this->x + p1.x) / 2;
            double ysum = (this->y + p1.y) / 2;
            return point(xsum, ysum);
        }

        double x;
        double y;
};