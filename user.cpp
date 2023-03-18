#include <iomanip>

#include "user.h"

unsigned User::s_id_increment = 1;

User::User(std::string first_name, std::string last_name, std::string email) :
    id(s_id_increment++), first_name(first_name), last_name(last_name), email(email) {};


std::ostream& User::printHeaders(std::ostream& os)
{
    std::cout << std::left;
    os  << std::setw(6) << "ID"
        << std::setw(15) << "First Name"
        << std::setw(15) << "Last Name"
        << std::setw(25) << "Email"
        << std::endl;
    return os;
}


/* ----- Friend Methods ----- */
std::ostream& operator<<(std::ostream& os, const User& user)
{
    std::cout << std::left;
    os  << std::setw(6) << user.id
        << std::setw(15) << user.first_name
        << std::setw(15) << user.last_name
        << std::setw(25) << user.email
        << std::endl;
    return os;
}