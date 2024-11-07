#pragma once

class point{
    public:
        point();
        point(double newX, double newY);
        void pp();

        double operator-(point p1);
        double distance(point p1);

        bool operator==(point p1);
        bool same(point p1);

        bool operator!=(point p1);
        bool notSame(point p1);

        point operator/(point p1);
        point midpoint(point p1);

        double x;
        double y;
};