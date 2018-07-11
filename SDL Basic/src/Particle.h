/*
 * Particle.h
 *
 *  Created on: Jul 10, 2018
 *      Author: Desktop
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace caveofprogramming {

//struct Particle
//members are public by default
class Particle {
public:

	double m_x;
	double m_y;

	double m_speed;
	double m_direction;

	double m_xspeed, m_yspeed;

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace caveofprogramming */

#endif /* PARTICLE_H_ */
