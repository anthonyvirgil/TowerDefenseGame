#pragma once

#include <vector>
#include <iostream>
#include "Creep.h"
#include "Map.h"
#include <queue>

using namespace std;

class CreepSquad
{
public:
	CreepSquad(Map* map, TextureManager* texManager);
	void move(Player *player, sf::RenderWindow* w);
	void resetCreepSquad(int level, sf::RenderWindow* w);
	virtual ~CreepSquad();

	vector<Creep*> getCreeps();

	void Update(Player* player, sf::RenderWindow* w, double elapsedTime);
	void Draw(sf::RenderWindow* w);

private:
	vector<Creep*> creepSquad;
	Map* map;
	TextureManager* texManager;
	queue<Creep*> creepQueue;
	//sf::Time timeElapsed;
	double timeElapsed;
	int startLocationX;
	int startLocationY;

	void checkMove(Creep* creep);
	bool checkEndTile(Creep* creep, Player* player);
	void damageCreep(Player *player, int damage);
	void removeDeadCreeps();
};

