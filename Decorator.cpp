#include <iostream>

class IComponent {
public:
	virtual void operation() = 0;
        virtual ~IComponent(){}
};
 
class Component : public IComponent {
public:
	virtual void operation() {
		std::cout << "Hello World!" << std::endl;
	}
};
 
class DecoratorOne : public IComponent {
	IComponent* m_component;
    std::string m_character;
 
public:
	DecoratorOne(IComponent* component, std::string character) 
        : m_component(component), m_character(character) {}
 
	virtual void operation() {
		std::cout << m_character << std::endl;
		m_component->operation();
        std::cout << m_character << std::endl;
	}
};
 
 
int main() {
	DecoratorOne obj(new Component(), "==========");
	obj.operation();
 
	return 0;
}
