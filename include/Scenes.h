#ifndef SCENES_H
#define SCENES_H

class Game;

namespace Scenes {
  void hotelLobby(Game& game);
  void talkToOfficer(Game& game);
  void examineCrimeScene(Game& game);
  void interviewStaff(Game& game);
  void examineGuestRegistry(Game& game);
  void checkSecurityFootage(Game& game);
  void choices(Game& game, int choice, void (*function1)(Game&), void (*function2)(Game&), void (*function3)(Game&), void (*function4)(Game&));
}

#endif
