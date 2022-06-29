#include <stdio.h>

// This is a program without typedef to devlare variables

/* struct Point{
 * 	int x;
 * 	int y;
 * };
 * int main() {
 * 	struct Point p1;
 * 	p1.x = 1;
 * 	p1.y = 3;
 * 	printf("%d \n", p1.x);
 * 	printf("%d \n", p1.y);
 * 	return 0;
 * }
 */

// Now we write the profram using typedef

struct Point{
	int x;
	int y;
};

typedef struct Point Point;

int main(){
	Point p1;
	p1.x = 1;
	p1.y = 3;
	printf("%d \n", p1.x);
	printf("%d \n", p1.y);
	return 0;
}
