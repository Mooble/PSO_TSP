#include "velocity.h"
#include "node.h"
#include <vector>

#ifndef POSITION
#define POSITION

class Position{
public:
	Position();
	Position(const Position &p);
	Position& operator=(const Position & rhs);
	Position& operator+=(const Velocity & rhs);
	Position operator+(const Velocity & rhs);
	Velocity operator-(const Position &p);
	Position& add_node(Node new_n);
    
    std::vector<Node> nodes;
    
};

#endif
