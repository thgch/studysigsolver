#include "Organism.h"
#include <random>
#include "libsig.h"


Organism::Organism(int n_points, int max_n_pips, double pip_size, int order)
{
	n_points_ = n_points;
	max_n_pips_ = max_n_pips;
	pip_size_ = pip_size;
	
	path_.resize(n_points + 1); // starting at 0
	derivatives_.resize(n_points);

	mt19937_64 rand_gen(123);
	std::uniform_int_distribution<int> randomIntDistribution(1, 1000);

	order_ = order;
	plogsig_ = new float[logsigdim(2, order)];
}

Organism::Organism(const Organism& other)
	: n_points_(other.n_points_), max_n_pips_(other.max_n_pips_), pip_size_(other.pip_size_)
{
	delete[] plogsig_;
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

void Organism::setPath(const std::vector<double>& path)
{
	for (vector<double>::size_type i = 0; i < path_.size(); ++i) {
		path_[i] = path[i];
	}
}

double Organism::loss(const std::vector<double>& sig, int order)
{
	//double diff = 0.0;
	//for (vector<double>::size_type i = 0; i < path_.size(); ++i) {
	//	diff = ()
	//}
	return 1.0;
}

void Organism::logsig(std::vector<double>& res)
{
	//logSignature()
}

void Organism::random_derivative()
{
}

void Organism::randomise()
{
}


