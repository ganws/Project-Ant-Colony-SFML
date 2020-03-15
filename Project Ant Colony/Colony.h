#pragma once
#include "Ant.h"
#include "PathBlocker.h"
#include "PheroMatrix.h"

class Colony
{
public:

	//constructor and destructor
	Colony();
	~Colony();
	sf::Texture* ant_skin;
	std::vector<Ant> AntContainer;

	//method
	void addAnt(sf::Vector2f spwn_loc);
	void removeAnt();
	void computeAntMove(float dt);
	void initColony(std::vector<PathBlocker>* pb_ptr, sf::Texture *ant_skin_mian, PheromoneSystem* pher_ptr_input, PheroMatrix* pheromat_input);
	void updateAntNum();
	void drawColony(sf::RenderWindow* window);
	int getAntNum();

private:
	int ant_num{0};
	std::vector<PathBlocker>* pblocker_systm_ptr{ nullptr };
	PheromoneSystem* pheromones_ptr { nullptr };
	PheroMatrix* m_pheromatrix_ptr{nullptr};

};
