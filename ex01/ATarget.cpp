#include "ATarget.hpp"

ATarget::ATarget(std::string type)
{
    _type = type;
}

ATarget::ATarget(const ATarget &copy)
{
    *this = copy;
}

ATarget& ATarget::operator=(const ATarget &rhs)
{
    this->_type= rhs._type;
    return *this;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->_type << " has been " << spell.getEffects() << "!"<< std::endl;
}