#include <rrt_planner/RRT.h>

int main(int argc, char* argv[]) {
    //set start and goal states
    Node start_node, goal_node;
    start_node.position.x = 50;
    start_node.position.y = 50;
    start_node.parent = nullptr;
    goal_node.position.x = 350;
    goal_node.position.y = 350;

    RRT planner(&start_node,&goal_node);
    ImageDraw draw(&start_node,&goal_node);

    planner.initialize();
    draw.initialize();

    planner.solve();

    return 0;
}
