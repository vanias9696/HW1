#include "golf.h"

int main()
{
	golf gl;

	setGolf(gl, "non-interactive", 15);
	showGolf(gl);

	if (setGolf(gl) == 0)
		std::cout << "fullname is empty!" << std::endl;
	showGolf(gl);
	return 0;
}
