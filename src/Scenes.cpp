#include <iostream>
#include "Scenes.h"
#include "Game.h"

using namespace std;

namespace Scenes {

  void hotelLobby(Game& game) {
    cout << "You are in the hotel lobby. A crime has just occurred.\n";
    cout << "1. Talk to the police officer\n";
    cout << "2. Examine the crime scene\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        talkToOfficer(game);
    } else {
        examineCrimeScene(game);
    }
  }

  void talkToOfficer(Game& game) {
    cout << "You decided to talk to the officer.\n";
    cout << "Officer: 'The situation is grim. Thomas Bardon was found dead in his room.'\n";
    game.getClueManager().addClue("Suspicious note in victim's room");
    // Additional dialogue or actions can be added here
  }

  void examineCrimeScene(Game& game) {
    cout << "You decided to examine the crime scene.\n";
    cout << "You notice something unusual near the window.\n";
    game.getClueManager().addClue("Broken watch at crime scene");
    // Additional observations or clues can be added here
  }

}
