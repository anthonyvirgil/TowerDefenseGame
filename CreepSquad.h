#pragma once

#include <vector>
#include <iostream>
#include "Creep.h"
#include "Map.h"

using namespace std;

class CreepSquad
{
public:
	CreepSquad(Map* map, TextureManager* texManager);
	void move(Player *player, sf::RenderWindow* w);
	void resetCreepSquad(int level);
	virtual ~CreepSquad();

private:
	vector<Creep*> creepSquad;
	Map* map;
	TextureManager* texManager;
	void checkMove(Creep* creep, Map *map);
	bool checkEndTile(Creep* creep, Map* map, Player* player);
	void damageCreep(Player *player, int damage);
};

