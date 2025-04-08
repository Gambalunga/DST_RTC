
#include <Arduino.h>
#include "RTClib.h"

// extern const char rulesDST[];
extern char rulesDST[];

class DST_RTC
{
  public:
    DST_RTC();

    boolean checkDST(DateTime RTCTime);
    DateTime calculateTime(DateTime RTCTime);
};
