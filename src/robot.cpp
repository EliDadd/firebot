#include "robot.h"
#include "nav.h"
/*#include <string>
#include <iostream>
using std::string;
*/
void Robot::sendArduino(int code){
	std::cout<<"the given code was: "<<code<<" \n";
}

void Robot::loadMap(int lvl){
	if(lvl == 3){ beSmart.loadMap("lvl3_map.txt");}
	else {beSmart.loadMap("lvl1_map.txt");}
}

Map* Robot::getMapPtr(){ return &map;}
Nav* Robot::getNavPtr(){ return &beSmart;}