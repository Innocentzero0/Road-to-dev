#include <iostream>

class Position {
public:
	int x;
	int y;

	Position(int x_val, int y_val) : x(x_val), y(y_val) {}

	Position operator + (Position pos) {
		Position new_pos(x + pos.x, y + pos.y);
		return new_pos;
	}
	bool operator == (Position pos) {
		if (x == pos.x && y == pos.y) {
			return true;
		}
		return false;
	}
};

int main() {
	Position pos1(21, 50);
	Position pos2(11, 34);
	Position pos3 = pos1 + pos2;

	if (pos1 == pos2) {
		std::cout << "player 1 not in position " << std::endl;
	}
	else {
		std::cout << "Both players are in position " << std::endl; 
	}
	std::cout << pos3.x << " " << pos3.y << std::endl;
	std::system("pause");
}
