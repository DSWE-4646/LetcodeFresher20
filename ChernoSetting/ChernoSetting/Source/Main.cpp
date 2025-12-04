#include<iostream>
//#include<string>

int main()
{
	const char* name = "Katze";
	
	using namespace std::string_literals;
	std::u32string name0 = U"Cherno"s + U"hello";
	const char* example = R"(Line1
Line2
Line3)";

	std::cin.get();
}