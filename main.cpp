#include <iostream>
#include "Text.h"



int main() {

    Text *t1 = new Text();

    std::cout << "Vowels: " << t1->number_of_vowels() << std::endl;
    std::cout << "Conconants: " << t1->number_of_consonants() << std::endl;
    std::cout << "Find string: " << t1->find_string("lorem") << std::endl;
    std::cout << "Find string(not): " << t1->find_string("alexito") << std::endl;
    std::cout << "To string method: " << t1->to_string() << std::endl;

    std::string s1 = "192";
    std::string s2 = "1k3";

    std::cout << "Is int: " << Text::is_int(s1) << std::endl;
    std::cout << "Is int(not): " << Text::is_int(s2) << std::endl;

    int s_to_i = Text::string_to_int(s1);
    int s_to_i2 = Text::string_to_int(s2);

    std::cout << "s1: " << s_to_i << "\ns2: " << s_to_i2 << std::endl;


    return 0;
}
