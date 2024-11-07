#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Point.hpp"
#include "iostream"
using namespace std;

point p1(-1, -1);
point p2(0, 0);
point p3(1, 1);
point p4(4, 5);
point p5(75, 64);
point p6(1.6, 6.2);
point p7(43.9, 41);
point p8(40, 10000);
point p9(0.001, 0.043);
point p10(8.9, 54.6);

TEST_CASE("Testing the \'-\' operator") {
    REQUIRE((p1 - p1) == 0);
    REQUIRE((p2 - p1) == double(sqrt(2)));
    REQUIRE((p3 - p1) == double(2*sqrt(2)));
    REQUIRE((p4 - p1) == double(sqrt(61)));
    REQUIRE((p5 - p1) == double(sqrt(10001)));
    REQUIRE((p6 - p1) == double(sqrt(58.6)));
    REQUIRE((p7 - p1) == double(sqrt(3780.01)));
    REQUIRE((p8 - p1) == double(sqrt(100021682)));
    REQUIRE((p9 - p1) == double(sqrt(2.08985)));
    REQUIRE((p10 - p1) == double(sqrt(3189.37)));
}

TEST_CASE("Testing the \'distance\' method") {
    REQUIRE(p1.distance(p1) == 0);
    REQUIRE(p2.distance(p1) == double(sqrt(2)));
    REQUIRE(p3.distance(p1) == double(2*sqrt(2)));
    REQUIRE(p4.distance(p1) == double(sqrt(61)));
    REQUIRE(p5.distance(p1) == double(sqrt(10001)));
    REQUIRE(p6.distance(p1) == double(sqrt(58.6)));
    REQUIRE(p7.distance(p1) == double(sqrt(3780.01)));
    REQUIRE(p8.distance(p1) == double(sqrt(100021682)));
    REQUIRE(p9.distance(p1) == double(sqrt(2.08985)));
    REQUIRE(p10.distance(p1) == double(sqrt(3189.37)));
}

TEST_CASE("Testing the \'==\' operator") {
    REQUIRE((p1 == p1) == true);
    REQUIRE((p2 == p1) == false);
    REQUIRE((p3 == p1) == false);
    REQUIRE((p4 == p1) == false);
    REQUIRE((p5 == p1) == false);
    REQUIRE((p6 == p1) == false);
    REQUIRE((p7 == p1) == false);
    REQUIRE((p8 == p1) == false);
    REQUIRE((p9 == p1) == false);
    REQUIRE((p10 == p1) == false);
}

TEST_CASE("Testing the \'same\' method") {
    REQUIRE(p1.same(p1) == true);
    REQUIRE(p2.same(p1) == false);
    REQUIRE(p3.same(p1) == false);
    REQUIRE(p4.same(p1) == false);
    REQUIRE(p5.same(p1) == false);
    REQUIRE(p6.same(p1) == false);
    REQUIRE(p7.same(p1) == false);
    REQUIRE(p8.same(p1) == false);
    REQUIRE(p9.same(p1) == false);
    REQUIRE(p10.same(p1) == false);
}

TEST_CASE("Testing the \'!=\' operator") {
    REQUIRE((p1 != p1) == false);
    REQUIRE((p2 != p1) == true);
    REQUIRE((p3 != p1) == true);
    REQUIRE((p4 != p1) == true);
    REQUIRE((p5 != p1) == true);
    REQUIRE((p6 != p1) == true);
    REQUIRE((p7 != p1) == true);
    REQUIRE((p8 != p1) == true);
    REQUIRE((p9 != p1) == true);
    REQUIRE((p10 != p1) == true);
}

TEST_CASE("Testing the \'notSame\' method") {
    REQUIRE(p1.notSame(p1) == false);
    REQUIRE(p2.notSame(p1) == true);
    REQUIRE(p3.notSame(p1) == true);
    REQUIRE(p4.notSame(p1) == true);
    REQUIRE(p5.notSame(p1) == true);
    REQUIRE(p6.notSame(p1) == true);
    REQUIRE(p7.notSame(p1) == true);
    REQUIRE(p8.notSame(p1) == true);
    REQUIRE(p9.notSame(p1) == true);
    REQUIRE(p10.notSame(p1) == true);
}

TEST_CASE("Testing the \'/\' operator") {
    REQUIRE(p1 / p1 == point(-1, -1));
    REQUIRE(p2 / p1 == point(-0.5, -0.5));
    REQUIRE(p3 / p1 == point(0, 0));
    REQUIRE(p4 / p1 == point(1.5, 2));
    REQUIRE(p5 / p1 == point(37, 31.5));
    REQUIRE(p6 / p1 == point(0.3, 2.6));
    REQUIRE(p7 / p1 == point(21.45, 20));
    REQUIRE(p8 / p1 == point(19.5, 4999.5));
    REQUIRE(p9 / p1 == point(-0.4995, -0.4785));
    REQUIRE(p10 / p1 == point(3.95, -26.8));
}

TEST_CASE("Testing the \'midpoint\' method") {
    REQUIRE(p1.midpoint(p1) == point(-1, -1));
    REQUIRE(p2.midpoint(p1) == point(-0.5, -0.5));
    REQUIRE(p3.midpoint(p1) == point(0, 0));
    REQUIRE(p4.midpoint(p1) == point(1.5, 2));
    REQUIRE(p5.midpoint(p1) == point(37, 31.5));
    REQUIRE(p6.midpoint(p1) == point(0.3, 2.6));
    REQUIRE(p7.midpoint(p1) == point(21.45, 20));
    REQUIRE(p8.midpoint(p1) == point(19.5, 4999.5));
    REQUIRE(p9.midpoint(p1) == point(-0.4995, -0.4785));
    REQUIRE(p10.midpoint(p1) == point(3.95, 26.8));
}