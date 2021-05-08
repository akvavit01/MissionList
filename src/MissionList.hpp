#pragma once

#include <Arduino.h>

#ifndef _MISSION_LIST_SIZE
    #define _MISSION_LIST_SIZE 10
#endif

class MissionList
{
private:
    byte _idxToFill;
    byte _idxToExecute;
    typedef void (*Mission)();
    Mission _missions[_MISSION_LIST_SIZE]; // resizing array in arduino is a bad idea, so I'll use static array instead

public:
    MissionList();
    ~MissionList();
    void addMission(Mission mission);
    void execMission();
    void execMission(unsigned long index);
};