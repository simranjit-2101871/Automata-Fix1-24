//the gril forgets her birthdate so make a progeam to make her remember at the right time
#include <iostream>
#include <cstring>

int checkbirthdate(const char *month, int day){
    if (strcmp(month, "july") == 0 && day == 5) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    const char* month = "july";
    int day = 5;
    
    if (checkbirthdate(month, day)) {
        std::cout << "It's a match!" << std::endl;
    } else {
        std::cout << "No match." << std::endl;
    }

    return 0;
}

