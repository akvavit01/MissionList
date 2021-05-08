#include "MissionList.hpp"

MissionList::MissionList() : _idxToFill(0), _idxToExecute(0)
{

}

MissionList::~MissionList()
{

}

void MissionList::addMission(Mission mission)
{
    _missions[_idxToFill++] = mission;
}

void MissionList::execMission()
{
    _missions[_idxToExecute++]();
}

void MissionList::execMission(unsigned long index)
{
    _missions[index]();
}