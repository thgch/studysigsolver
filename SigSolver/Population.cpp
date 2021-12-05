#include "Population.h"

Population::Population(int n_organisms, int n_points, double pip_size, int max_n_pips)
{
	n_organisms_ = n_organisms;
	n_points_ = n_points;
	pip_size_ = pip_size;
	max_n_pips_ = max_n_pips;

	for (int i = 0; i < n_organisms; ++i)
	{
		organisms_.push_back(Organism(n_points, max_n_pips, pip_size));
	}
}

Population::~Population()
{

}

double Population::evolve(vector<double>& sig, int top_p, int order, double mutation_prob)
{
	return 1.0;
}


