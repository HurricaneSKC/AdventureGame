#include "ClueManager.h"
#include <iostream>

void ClueManager::addClue(const std::string& clue) {
    if (!hasClue(clue)) {
        clues.push_back(clue);
    }
}

bool ClueManager::hasClue(const std::string& clue) const {
    for (const auto& c : clues) {
        if (c == clue) return true;
    }
    return false;
}

void ClueManager::showClues() const {
    std::cout << "Collected Clues:\n";
    for (const auto& clue : clues) {
        std::cout << "- " << clue << "\n";
    }
}
