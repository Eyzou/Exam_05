#pragma once
#include <string>
#include <iostream>

class Warlock
{
    public:
    
        Warlock(std::string name, std::string title);
        ~Warlock();
        const std::string &getName() const {return _name;}
        const std::string &getTitle() const {return _title;}
        void setTitle(const std::string &title) { this->_title = title;};
        void introduce() const;

    private:

        std::string _name;
        std::string _title;
        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &rhs);
};