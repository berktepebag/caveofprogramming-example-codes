/*
 * Particle.cpp
 *
 *  Created on: Jul 10, 2018
 *      Author: Desktop
 */

#include "Particle.h"
#include <stdlib.h>
#include <math.h>

namespace caveofprogramming {

Particle::Particle() : m_x(0), m_y(0) {

	m_direction = (2 * M_PI * rand())/RAND_MAX;
	m_speed = (0.05 * rand()) / RAND_MAX;

	m_speed = pow(m_speed,2);
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(int interval){

	m_direction += interval * 0.0003;

	double xspeed = m_speed * interval * cos(m_direction);
	double yspeed = m_speed * interval * sin(m_direction);

	m_x += xspeed;
	m_y += yspeed;
}


} /* namespace caveofprogramming */
