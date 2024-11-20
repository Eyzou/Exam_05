#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget();
        ATarget(ATarget const &copy);
        ATarget &operator=(ATarget const &rhs);
        ATarget(std::string type);
        virtual ~ATarget();

        const std::string &getType() const;
        virtual ATarget* clone() const = 0;

        void getHitBySpell(const ASpell &spell) const ;

    protected:
        std::string _type;

};