//
// Created by alex on 11. 08. 20.
//

#include "Text.h"

Text::Text() {
    lines.emplace_back("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod ");
    lines.emplace_back("Sapien nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur.");
    lines.emplace_back("Libero justo laoreet sit amet cursus sit amet dictum sit.");
}

Text::~Text() {
}


const int Text::number_of_vowels() {
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


const int Text::number_of_consonants() {
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


