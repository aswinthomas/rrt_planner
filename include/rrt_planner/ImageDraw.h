#pragma once

#include <opencv2/core/core_c.h>

#include <rrt_planner/Node.h>

using namespace planner;

class ImageDraw {
private:
    Node *start_, *end_;
    Mat image;

public:
    ImageDraw(Node* start, Node* end): start_(start), end_(end) {}
    int initialize();
    int drawPath();
};
