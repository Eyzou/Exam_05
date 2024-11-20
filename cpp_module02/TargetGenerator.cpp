#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

/*
TargetGenerator::TargetGenerator(TargetGenerator const &copy)
{
    *this = copy;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &rhs)
{
}*/

TargetGenerator::~TargetGenerator()
{
    for(std::map<std::string, ATarget*>::iterator it = _target.begin(); it != _target.end(); ++it)
    {
        delete it->second;
    }
    _target.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
        _target[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    std::map<std::string, ATarget*>::iterator it = _target.find(type);
    if (it != _target.end())
    {
        delete it->second;
        _target.erase(it);
    }
    
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
    std::map<std::string, ATarget*>::iterator it = _target.find(type);
    if (it != _target.end())
        return it->second->clone();
    return 0;
}


