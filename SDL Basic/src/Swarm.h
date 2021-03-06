/*
 * Swarm.h
 *
 *  Created on: Jul 10, 2018
 *      Author: Desktop
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace caveofprogramming {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	//Because this is a short method we defined it here.
	const Particle * const getParticles(){return m_pParticles;}
};

} /* namespace caveofprogramming */

#endif /* SWARM_H_ */
