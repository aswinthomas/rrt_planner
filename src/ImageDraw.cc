#include <rrt_planner/ImageDraw.h>

ImageDraw::initialize() {
    //draw the start position as blue
    for(int i=start_.x-5; i<start_.x+5; i++) {
        for(int j=start_.y-5; j<start_.y+5; j++) {
            image.at<Vec3b>(i,j)[0] = 0;
            image.at<Vec3b>(i,j)[1] = 0;
            image.at<Vec3b>(i,j)[2] = 255;
        }
    }

    //draw the goal position as red
    for(int i=end_.x-5; i<end_.x+5; i++) {
        for(int j=end_.y-5; j<end_.y+5; j++) {
            image.at<Vec3b>(i,j)[0] = 255;
            image.at<Vec3b>(i,j)[1] = 0;
            image.at<Vec3b>(i,j)[2] = 0;
        }
    }
}

void ImageDraw::drawPath() {
    Node *node, *parent;
            node = end_node;
            parent = end_node->parent;
            while(parent!=nullptr)
            {
                line(img, Point(parent->position.y, parent->position.x), Point(node->position.y, node->position.x), Scalar(0, 255, 0), 2, 8);
                node = node->parent;
                parent = parent->parent;
            }
}
