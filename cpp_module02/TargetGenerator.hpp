#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &type);

    private:
        //TargetGenerator &operator=(TargetGenerator const &rhs);
        //TargetGenerator(TargetGenerator const &copy);
        std::map<std::string, ATarget*> _target;
};