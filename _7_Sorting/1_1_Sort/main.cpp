#include <iostream>
#include <algorithm>
using namespace std;

// own sorting comparison algorithm.

struct Point{
    int x;
    int y;
};

bool comp(Point p1, Point p2){
    return (p1.x < p2.x);
}

int main() {
    Point pt[] = {{3,2},{1,9},{5,7}};
    int n = 3;

    // sorted based on x value
    sort(pt, pt + n, comp);
    
    for(Point e : pt){
        cout << "(" << e.x << ", " << e.y << ") ,";
    }

    return 0;
}
