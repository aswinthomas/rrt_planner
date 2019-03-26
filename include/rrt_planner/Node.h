#pragma once

#include <vector>

namespace planner {
using namespace std;

class Point {
private:
   int x_, y_;
public:
   Point(): x(0), y(0) {}
   Point(int x, int y): x_(x), y_(y) {}
   double dist(Point point) {
     int x_diff = this.x_ - point.x;
     int y_diff = this.y_ - point.y;
     return sqrt(powf(x_diff, 2.0) + powf(y_diff, 2.0));
   }
};

class Node {
    vector<Node*> children_;
    Node* parent_;
    Point position_;
};
}
