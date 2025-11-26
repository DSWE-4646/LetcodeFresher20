#include<iostream>
#include<string>

class Entity
{
public:
	std::string GetName() { return "Entity"; }
};

class player : public Entity
{
private:
	std::string m_Name;
public:
	player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() {}
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	PrintName(e);

	Entity* p = new player("Cherno");
	PrintName(p);

	std::cin.get();
}