

#include <iostream>
#include <string>

int main() {
	
	std::string name = "Hello, World";
	
	auto n = name;
	
	std::cout << n << std::endl;
	
	std::reverse_iterator<std::string::iterator> r = n.rbegin();
    
	std::string rev(r, n.rend());

    std::cout << rev << '\n';
	
	return 0;
	
}
