#ifndef STATE_H
#define STATE_H

#include "Arduino.h"

using namespace std;

enum class State {
  RISE_IN,
  RISE_OUT,
  FALL_IN,
  FALL_OUT,
  STOP,
  PRE_STOP
};
#endif /* ifndef STATE_H */
