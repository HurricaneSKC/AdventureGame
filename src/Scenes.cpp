#include <iostream>
#include "Scenes.h"
#include "Game.h"

using namespace std;

namespace Scenes {

  void hotelLobby(Game& game) {
    cout << "You are in the hotel lobby. A crime has just occurred.\n";
    cout << "1. Talk to the police officer\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        talkToOfficer(game);
    } else {
      talkToOfficer(game);
    }
  }

  void talkToOfficer(Game& game) {
    cout << "As you approach the police officer, a stern yet visibly shaken man in his late forties, you notice the hotel lobby bustling with concerned staff and curious guests, all kept at bay by a thin yellow tape. The grandeur of the lobby, with its marble floors and crystal chandeliers, stands in stark contrast to the grim atmosphere.\n";
    cout << "\"Detective,\" the officer nods respectfully. \"The murder took place in Mr. Bardon\'s suite, on the third floor. We found him in his armchair, a single gunshot wound to the chest. No signs of a struggle. The room was locked from the inside, and we had to break in.\n";
    cout << "He hesitates for a moment, his expression turning graver. \"It's peculiar, though. The room was... too clean. Like someone made an effort to wipe it down. And no gun was found at the scene. This wasn't a simple break-in gone wrong.\n";
    cout << "The officer's information sets your mind racing. A locked room, a cleaned scene, and no weapon. This was a meticulously planned murder.";
    cout << "What do you do next?.\n";
    cout << "'\n";
    cout << "1. Inspect Mr. Bardon's suite.\n";
    cout << "2. Interview the hotel staff.\n";
    cout << "3. Examine the hotel's guest registry..\n";
    cout << "4. Look for any security footage of the hotel.\n";
    int choice;
    cin >> choice;
    choices(game, choice, examineCrimeScene, interviewStaff, examineGuestRegistry, checkSecurityFootage);


    // Additional dialogue or actions can be added here
  }

  void examineCrimeScene(Game& game) {
    cout << "You decided to examine the crime scene.\n";
    cout << "You notice something unusual near the window.\n";
    game.getClueManager().addClue("Broken watch at crime scene");
    // Additional observations or clues can be added here
  }

  void interviewStaff(Game& game) {
    cout << "Who do you wish to interview first?\n";
  }

  void examineGuestRegistry(Game& game) {
    cout << "You check the guest registry book, on it you see a list of names.\n";
    cout << "Brian Bardon, Shiela Featherington, Thomas Bardon, Eleanor Bardon, Marcus Welling, Liam Caldwell, Alex Chen, Claudia Bell, Harold Stark";
  }

  void checkSecurityFootage(Game& game) {
    cout << "Unfortunately there is currently no footage, the tapes have all been deleted";
  }

  void choices(Game& game, int choice, void (*function1)(Game&), void (*function2)(Game&), void (*function3)(Game&), void (*function4)(Game&)) {
    switch (choice)
    {
    case 1:
      function1(game);
      break;
    case 2:
      function2(game);
      break;
    case 3:
      function3(game);
      break;
    case 4:
      function4(game);
      break;
    default:
      break;
    }
  }
}

