#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << name <<": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name <<": My job here is done!" << std::endl;
}

Warlock::Warlock()
{
    std::cout << _name << ":This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &copy)
{
    *this = copy;
}


Warlock &Warlock::operator=(const Warlock &rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    return *this;
}

void Warlock::introduce() const
{
    std::cout << _name <<": I am " << _name << ", " << _title << "!" << std::endl;
}


