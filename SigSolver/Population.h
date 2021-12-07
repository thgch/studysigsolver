#pragma once

#ifndef _POPULATION_H
#define _POPULATION_H

#include "Organism.h"
#include <vector>

using namespace std;

class Population
{
	int n_organisms_;
	int n_points_;
	double pip_size_;
	int max_n_pips_;
	int order_;
	vector<Organism> organisms_;

public:
	Population(int n_organisms, int n_points, double pip_size, int n_pip, int order);
	~Population();

	double evolve(vector<double>& sig, int top_p, int order, double mutation_prob = 0.1);
	void fittest(vector<double>& sig, double top_p, int order);
};

#endif
