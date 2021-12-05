#include "Organism.h"


Organism::Organism(int n_points, int max_n_pips, double pip_size)
{
	n_points_ = n_points;
	max_n_pips_ = max_n_pips;
	pip_size_ = pip_size;
}

Organism::Organism(const Organism& other)
	: n_points_(other.n_points_), max_n_pips_(other.max_n_pips_), pip_size_(other.pip_size_)
{
}

Organism::~Organism()
{
}

void Organism::add(const Organism& other, Organism& result)
{
}

void Organism::mutate(double prob)
{
}

void Organism::setPath(std::vector<double>& path)
{
	path = path_;
}

void Organism::random_derivative()
{
}

void Organism::randomise()
{
}


