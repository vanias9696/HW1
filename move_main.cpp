#include "move.h"

int main()
{
	Move move1;
	Move move2(16.784, 964.474);

	std::cout << "move1: [ ";
	move1.showmove();
	std::cout << " ]" << std::endl;
	std::cout << "move2: [ ";
	move2.showmove();
	std::cout << " ]" << std::endl;

	move1.reset(20.235, 75.243);
	std::cout << "move1 change to: [ ";
	move1.showmove();
	std::cout << " ]" << std::endl;

	move2 = move2.add(move1);
	std::cout << "to move2 add move 1 and move become: [ ";
	move2.showmove();
	std::cout << " ]" << std::endl;

}
