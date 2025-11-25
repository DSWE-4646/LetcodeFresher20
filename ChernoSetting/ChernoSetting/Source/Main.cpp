#include<iostream>

class Entity
{
public:
	float x, y;

	void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};


int main()
{
	Entity e;
	std::cout << e.x << e.y << std::endl;
	e.Print();
	std::cin.get();
}