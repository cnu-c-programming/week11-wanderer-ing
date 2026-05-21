// #include <stdio.h>

// struct Point {
//     int x;
//     int y;
// };

// int main() {
//     struct Point p={1,2};
//     printf("%d %d\n", p.x, p.y);
//     return 0;
// }

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p={1,2};
    printf("%d %d\n", p.x, p.y);
    return 0;
}