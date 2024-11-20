#pragma once
#include <string>
#include <iostream>

class Warlock
{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(std::string const &title);
        void introduce() const;

    private:
        Warlock();
        Warlock(Warlock const &copy);
        Warlock &operator=(Warlock const &rhs);
        std::string _name;
        std::string _title;
};