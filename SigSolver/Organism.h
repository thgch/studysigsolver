#ifndef _ORGANISM_H
#define _ORGANISM_H

#include <vector>

using namespace std;


class Organism
{
	std::vector<double> path_;
	std::vector<double> derivatives_;
	int n_points_;
	int max_n_pips_;
	double pip_size_;

public:
	Organism(int n_points_, int max_n_pips_, double pip_size_);
	Organism(const Organism& other);
	~Organism();
	void add(const Organism& other, Organism& result);
	void mutate(double prob = 0.1);
	void setPath(std::vector<double>& path);
	static int myadd(int lval, int rval)
	{
		return lval + rval;
	}

private:
	void random_derivative();
	void randomise();
};

#endif _ORGANISM_H
