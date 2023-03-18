#ifndef __USER__
#define __USER__

#include <iostream>

class User {
public:
    User(std::string first_name, std::string last_name, std::string email);

    /**
     * Prints Table headers.
     * This method is used before printing a list of users using the operator<<() method
     *  to show the titles for each column(user attribute).
     * Prints:
     * `ID    First Name     Last Name      Email`
    */
    static std::ostream& printHeaders(std::ostream& os);

    /**
     * returns a stream containing the user data in a table format.
     * Print example:
     * `4     John           Doe            john.doe@code.cpp`
    */
    friend std::ostream& operator<<(std::ostream& os, const User& user);
private:
    static unsigned s_id_increment;

    unsigned id;
    std::string first_name;
    std::string last_name;
    std::string email;
};

#endif//__USER__