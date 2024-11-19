#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell() {};
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &rhs);
        virtual ~ASpell() {};
        const std::string &getName() const { return _name;}
        const std::string &getEffects() const { return _effects;}
        virtual ASpell* clone() const = 0;
        void launch(const ATarget &target);  
};