#pragma once
namespace math {
	class Intervalle
	{
	private:
		double minimum;
		double maximum;
	public:
		Intervalle(double a,double b);
		double min();
		double max();
		bool operator[](double m);
		


	};
}


