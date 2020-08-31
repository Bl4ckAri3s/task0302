//
// Created by alex on 11. 08. 20.
//

#include <sstream>
#include "Text.h"

Text::Text() {
    lines.emplace_back("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod ");
    lines.emplace_back("Sapien nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur.");
    lines.emplace_back("Libero justo laoreet sit amet cursus sit amet dictum sit.");
}

Text::~Text() {
}


const int Text::number_of_vowels() const {
    int num = 0;

    for (const auto& word : lines) {
        for (const auto& ch : word) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                num++;
        }
    }

    return num;
}


const int Text::number_of_consonants() const {
    int num = 0;

    for (const auto& word : lines) {
        for (const auto& ch : word) {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
                num++;
        }
    }

    return num;
}

const bool Text::find_string(const std::string &s) {
    for (const auto& word : lines) {
        return word.find(s) <= word.size();
    }
}

const std::string Text::to_string() {
    std::stringstream ss;

    for (const auto& word : lines)
        ss << word;

    return ss.str();
}

const bool Text::is_int(const std::string& str) {
    for (const auto& ch : str) {
        if (!isdigit(ch))
            return false;
    }
    return true;
}
