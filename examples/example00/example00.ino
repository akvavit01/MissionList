#define _MISSION_LIST_SIZE 2

#include <Arduino.h>
#include <MissionList.hpp>

// MissionList object
MissionList missions;

// Prototypes
void mission1();
void mission2();

void setup()
{
    Serial.begin(9600);
    missions.addMission(&mission1);
    missions.addMission(&mission2);
}

void loop()
{
    static unsigned long currTime{0}, prevTime{0};
    currTime = millis();

    if (currTime - prevTime >= 1000)
    {
        missions.execMission();
    }
}

// Definitions
void mission1()
{
    Serial.println("mission1");
}

void mission2()
{
    Serial.println("mission2");
}