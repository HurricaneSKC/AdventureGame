#ifndef CLUEMANAGER_H
#define CLUEMANAGER_H

#include <string>
#include <vector>

class ClueManager {
  private:
    std::vector<std::string> clues;
  
  public:
    void addClue(const std::string& clue );
    bool hasClue(const std::string& clue) const;
    void showClues() const;
};

#endif
#ifndef CLUEMANAGER_H
#define CLUEMANAGER_H

#include <string>
#include <vector>

class ClueManager {
private:
    std::vector<std::string> clues;

public:
    void addClue(const std::string& clue);
    bool hasClue(const std::string& clue) const;
    void showClues() const;
};

#endif
