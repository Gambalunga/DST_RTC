# DST_RTC
library for automatically adjusting RTC time for daylight saving time (DST)

requires [RTClib](https://github.com/adafruit/RTClib/)

Function to figure out if we're in Daylight Saving Time, then adding an hour if we are in DST.  
adapted from nseidle    https://github.com/nseidle/Daylight_Savings_Time_Example/blob/master/Daylight_Savings_Time_Example.ino  
and further adapted from Andy Doro    https://github.com/andydoro/DST_RTC  

This algorithm is programmed to observe Daylight Saving Time in the United States, where as of the time 
of writing DST is observed between the second Sunday in March and the first Sunday in November. 

The rules for DST vary by country and territory.  
https://en.wikipedia.org/wiki/Daylight_saving_time_by_country

**The new version requires explicit definition of whether to use US or EU rules.**

This method checks whether its 2am or not when the time change officially occurs (this addition by Peter Bradley). 

Addition Peter Bradley
- Added 2:00 AM time change for the USA.
- In the European Union, Summer Time begins and ends at 1:00 a.m. Universal Time (Greenwich Mean Time). 
- For most of Europe DST usually begins on the last Sunday of March at 2:00 AM local time and ends on the last Sunday of October at 2:00 AM local time. The last Sunday of the month of March and October must always be on or after the 25th.
-     In Australian States where DST is observed Summer Time begins on the first Sunday of October at 2:00 AM local time
    and ends on the first Sunday of April 2:00 AM at local time. DST is not observed in all States.

Define US, EU or AU rules for DST. More countries could be added with different rules in DST_RTC.cpp

Insert one (or more) of the following variables in the sketch.
```
char rulesDST[3] = "US";  // US DST rules
char rulesDST[3] = "EU";  // EU DST rules
char rulesDST[3] = "AU";  // AU DST rules
```
## Installation
### From the Library Manager
1. Launch the Arduino IDE and navigate to *Sketch → Include Library → Manage Libraries*.
2. In the library manager, scroll to *DST_RTC* or enter the name into the search field.
3. Click on the library, then click on the Install button.

### From the ZIP file
1. Download the [ZIP file](https://github.com/andydoro/DST_RTC/archive/master.zip).
2. Launch the Arduino IDE and navigate to *Sketch → Include Library → Add .ZIP Library...*. From the prompt, select the ZIP just downloaded.
