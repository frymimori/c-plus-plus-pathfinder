## C++ Pathfinder

#### Description
Create shortest path traversals in grid graphs using C++ with a fast and unique pathfinding algorithm.

- Allocates static memory with stack instead of heap
- Compiles with forward-compatible C++98
- Conforms to strict ISO C++ with -pedantic-errors enabled
- Defines a destination, obstacles, a source and traversable spaces with numbers
- Efficient without multithreading or processor-specific vectorization
- Fast grid pathfinding speed without relying on compiler optimization
- Guarantees the shortest path from a source to a destination with obstacle avoidance
- Maps traversal waypoint coordinates efficiently based on a count of adjacent obstacles
- Memory-safe with defined behavior
- Minified and readable code with single-letter variable names
- Navigates in 4 directions with non-diagonal movement only
- Navigates in 8 directions with diagonal and non-diagonal movement
- Optimized for calculation speed and minimal memory usage
- Path trees are traversed and reversed efficiently in existing grid memory
- Returns a count of spaces traversed and a marked traversal path
- Traversal direction calculation is optimized with minimal conditional statements
- Traversal paths auto-correct with natural-looking traversal
- Traverses safely within bounds of a rectangular grid
- Unique algorithm without A* or Dijkstra algorithms

#### Usage
Clone the repository in the current directory with the command `git`.

``` console
git clone https://github.com/frymimori/c-plus-plus-pathfinder.git
```

Navigate to the cloned repository's root directory with the command `cd`.

``` console
cd c-plus-plus-pathfinder
```

The following example uses code from the file [test.cpp](https://github.com/frymimori/c-plus-plus-pathfinder/blob/main/test.cpp) to traverse shortest paths.

``` cpp
#include <cstdio>
#include "pathfinder.hpp"
using namespace pathfinder;

int main(void) {
	unsigned long a = 15;
	unsigned long b = 11;
	unsigned long c = 0;
	unsigned long d;
	unsigned char e[165] = {
		1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
		0, 0, 0, 7, 7, 7, 0, 7, 0, 0, 0,
		0, 0, 0, 7, 0, 7, 7, 7, 0, 0, 0,
		0, 0, 0, 7, 0, 7, 0, 0, 0, 0, 0,
		0, 7, 7, 7, 7, 7, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};
	d = pathfinder::A(a, b, e);
	a *= b;
	printf("%u ", e[c]);
	c++;

	if (a == d) {
		d = 0;
	}

	while (a != c) {
		printf("%u ", e[c]);

		if ((c + 1) % b == 0) {
			printf("\n");
		}

		c++;
	}

	return 0;
}
```

The function `pathfinder::A()` traverses in 8 directions diagonally and non-diagonally.

The function `pathfinder::B()` traverses in 4 directions non-diagonally.

The return value variable `d` is an `unsigned long` defined as it as the number of spaces in the shortest traversal path.

The first argument variable `a` is an `unsigned long` defined as the height of the grid graph.

The second argument variable `b` is an `unsigned long` defined as the width of the grid graph.

The result of `a * b` must be within the bounds of the constant `ULONG_MAX`.

The third argument variable `e` is an `unsigned char` array defined as the grid graph for pathfinding.

The length must be the result of `a * b`.

The grid graph spaces are defined as the following numbers.

- `0` Traversable
- `1` Source
- `2` Destination
- `7` Obstacle

The grid must have a single source `1` and a single destination `2`.

If the destination `2` can't be reached, the grid path is unmodified and the return value `d` is defined as `0`.

``` console
gcc -o c-plus-plus-pathfinder -pedantic-errors -std=c++98 pathfinder.cpp test.cpp && ./c-plus-plus-pathfinder
```

The output from the command `./c-plus-plus-pathfinder` is the grid graph with the shortest path traversal spaces defined as `4`.

``` console
./c-plus-plus-pathfinder
# 1 0 0 0 0 0 0 0 0 0 0
# 4 0 0 0 0 7 0 0 0 0 0
# 4 0 0 0 0 7 0 0 0 0 0
# 4 0 0 0 0 7 0 0 0 0 0
# 4 0 0 0 0 7 0 0 0 0 0
# 4 0 0 7 7 7 0 7 0 0 0
# 4 0 0 7 0 7 7 7 0 0 0
# 4 0 0 7 0 7 0 0 0 0 0
# 4 7 7 7 7 7 0 0 0 0 0
# 0 4 0 0 0 0 0 0 0 0 0
# 0 0 4 4 4 0 0 0 0 0 0
# 7 7 7 7 7 4 0 0 0 0 0
# 0 0 0 0 4 0 0 0 0 0 0
# 0 2 4 4 0 0 0 0 0 0 0
# 0 0 0 0 0 0 0 0 0 0 0
```
