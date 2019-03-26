#pragma once

#include <rrit_planner/Node.h>

namespace planner {
class RRT {
private:
    Node *startNode, *goalNode;

public:
    Node* getNearestNode(Node* node);

};
}
