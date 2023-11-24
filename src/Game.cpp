#include "Game.h"
#include "Scenes.h"

void Game::start() {
  Scenes::hotelLobby(*this);
}

ClueManager& Game::getClueManager() {
    return clueManager;
}
