#include "Competition.h"

Competition::Competition(){
}
Competition::~Competition(){
    for (Animal* i: players){
        delete i;
        i = nullptr;
    }
}
void Competition::addPlayer(Animal* beast){
    players.push_back(beast);
}

void Competition::addRoad(int length){
    rd = new Road(length);
}

void Competition::start() {
    //setup race
    std::vector <Animal* > winner;
    bool race_continue = true;
    //start race
    while(race_continue){
        for(Animal* i: players){

            rd->mark(i->getPosition(), i->getMark());

            if(i->getPosition() > rd->getLastBlock()){
                race_continue = false;
                winner.push_back(i);
            }
            i->move();
        }
    }
    for( Animal* i: winner){
        i->showExcitement();
    }
}