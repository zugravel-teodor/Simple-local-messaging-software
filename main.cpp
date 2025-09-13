/* 

Simple Local Messaging Software | Copyright (C) 2025 Zugrăvel Teodor
This program comes with ABSOLUTELY NO WARRANTY. This is free software,
and you are welcome to redistribute it under certain conditions. 

***************************************************************************************
----------------------GNU GENERAL PUBLIC LICENSE VERSION 3-----------------------------
***************************************************************************************

After compiling, delete this file and use the binary locally.
Do not distribute the binary without the source code.
Make sure to share the source code with all the users of this programm. 

*/

#include <iostream>

int main() {
    // Modify the following variables to your liking!
    const std::string license = "accepted";
    const std::string groupname = "group_name";
    const std::string grouppass = "password";
    //**********************************************

    std::string username;
    std::string userpost;
    std::string temppass;
    std::string anything;
    std::string enter;

    system("clear");

    if (license == "accepted") {
        std::cout << "Enter the group password: ";
        std::cin >> temppass;
        system("clear");

        if (grouppass == temppass) {
            std::cout << "username: L, will lock the conversation and archive the last message." << std::endl;
            std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;
            std::cout << "           " << groupname << std::endl;
            std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;

            while (true) {
                std::cout << "";
                std::getline(std::cin, anything);

                std::cout << "username: ";
                std::getline(std::cin, username);

                if (username == "L") {
                    system("clear");
                    std::cout << "Enter the group password: ";
                    std::cin >> temppass;
                    system("clear");
                    std::cout << "Archived message: " << "\033[32m" << username << ": " << userpost << "\033[0m" << std::endl;

                    if (grouppass == temppass) {
                        std::cout << "username: L, will lock the conversation and archive the last message." << std::endl;
                        std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;
                        std::cout << "           " << groupname << std::endl;
                        std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;

                        while (true) {
                            std::cout << "";
                            std::getline(std::cin, anything);

                            std::cout << "username: ";
                            std::getline(std::cin, username);

                            if (username == "L") {
                                
                            } else {
                                std::cout << "message: ";
                                std::getline(std::cin, userpost);

                                system("clear");

                                std::cout << "username: L, will lock the conversation" << std::endl;
                                std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;
                                std::cout << "           " << groupname << std::endl;
                                std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;
                                std::cout << "\033[32m" << username << ": " << userpost << "\033[0m" << std::endl;
                                std::cout << "(press enter)" << std::endl;
                            }
                        }
                    } else {
                        std::cout << "Wrong password, (ctrl+c to exit)." << std::endl;
                        std::cin >> enter;
                    }
                } else {
                    std::cout << "message: ";
                    std::getline(std::cin, userpost);

                    system("clear");

                    std::cout << "username: L, will lock the conversation" << std::endl;
                    std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;
                    std::cout << "           " << groupname << std::endl;
                    std::cout << "* * * * * * * * * * * * * * * * * * *" << std::endl;
                    std::cout << "\033[32m" << username << ": " << userpost << "\033[0m" << std::endl;
                    std::cout << "(press enter)" << std::endl;
                }
            }
        } else {
            std::cout << "Wrong password, (ctrl+c to exit)." << std::endl;
            std::cin >> enter;
        }
    } else {
        while (true) {
            std::cout << "You must accept the license to continue . . ." << std::endl;
        }
    }

    return 0;
}
