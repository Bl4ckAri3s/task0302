//
// Created by alex on 11. 08. 20.
//

#ifndef TASK0302_TEXT_H
#define TASK0302_TEXT_H
#include <iostream>
#include <vector>


class Text {
private:
    std::vector<std::string> lines;

public:
    Text();
    ~Text();

    const int number_of_vowels() const;
    const int number_of_consonants() const;
    const bool find_string(const std::string& s);
    const std::string to_string();

    static const bool is_int(const std::string& str);
    static const int string_to_int(const std::string& str);
};


#endif //TASK0302_TEXT_H
