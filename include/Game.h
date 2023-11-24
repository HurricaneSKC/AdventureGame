// Game.h

#ifndef GAME_H
#define GAME_H

#include "ClueManager.h"

class Game {
  private:
    ClueManager clueManager;

  public:
    void start();
    ClueManager& getClueManager();
};

#endif
