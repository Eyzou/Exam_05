#pragma once
#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell();
        ASpell(ASpell const &copy);
        ASpell &operator=(ASpell const &rhs);
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();

        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell* clone() const = 0;

        void launch(const ATarget &target);

    protected:
        std::string _name;
        std::string _effects;

};