#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;
    
    public:
        ATarget() {};
        ATarget(std::string type);
        ATarget(const ATarget &copy);
        ATarget &operator=(const ATarget &rhs);
        virtual ~ATarget() {};
        const std::string &getType() const {return _type;}
        virtual ATarget* clone() const = 0;
        void getHitBySpell(const ASpell &spell) const;
};