#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget(std::string type)
{
    _type = type;
}

ATarget::ATarget(ATarget const &copy)
{
    *this = copy;
}

ATarget &ATarget::operator=(ATarget const &rhs)
{
    _type = rhs._type;
    return *this;
}

ATarget::~ATarget()
{
}

const std::string &ATarget::getType() const
{
    return _type;
}

void ATarget::getHitBySpell(const ASpell &spell) const 
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}