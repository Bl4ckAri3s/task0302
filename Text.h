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

    const int number_of_vowels();
    const int number_of_consonants();
};


#endif //TASK0302_TEXT_H
