#include <iostream>
#include <string>
#include <vector>

#include "user.h"

std::vector<User> initUserTable();

int main()
{
    std::vector<User> users = initUserTable();

    std::cout << User::printHeaders;
    for(auto user: users)
        std::cout << user;

    return 0;
}


std::vector<User> initUserTable()
{
    std::vector<User> users;

    users.push_back({"Ramadan", "Jaafari", "jaafariramadan@gmail.com"});
    users.push_back({"Koko", "Fofo", "kofo@koko.ltd"});
    users.push_back({"Farfoor", "AbuBarboor", "funzies@keef.enjoy"});

    return users;
}