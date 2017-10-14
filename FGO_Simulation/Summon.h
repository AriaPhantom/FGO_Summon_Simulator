#ifndef SUMMON
#define SUMMON

#include <boost/random.hpp> // Convenience header file
#include <iostream>
#include <ctime>			// std::time

using namespace std;

void Summon()
{
	int Servant_5 = 0;
	int Servant_4 = 0;
	int Servant_3 = 0;

	int Craft_5 = 0;
	int Craft_4 = 0;
	int Craft_3 = 0;
	
	long Trial = 0;

	// A. Define the lagged Fibonacci and Normal objects
	boost::lagged_fibonacci607 rng;
	rng.seed(static_cast<boost::uint32_t> (std::time(0)));
	boost::uniform_real<> uni(0.0, 100.0);

	boost::variate_generator<boost::lagged_fibonacci607&, boost::uniform_real<> >
		uniRng(rng, uni);

	for (long n = 1; n <= 10000; ++n)
	{
		double outcome = uniRng();

		if (outcome <= 0.6)
		{
			Servant_5++;
			Trial = n;
			break;
		}

		if (outcome <= 1.0 && outcome > 0.6)
		{
			Servant_5++;
		}

		if (outcome <= 4.0 && outcome > 1.0)
		{
			Servant_4++;
		}

		if (outcome <= 8.0 && outcome > 4.0)
		{
			Craft_5++;
		}

		if (outcome <= 20.0 && outcome > 8.0)
		{
			Craft_4++;
		}

		if (outcome <= 60.0 && outcome > 20.0)
		{
			Craft_3++;
		}

		if (outcome <= 100.0 && outcome > 60.0)
		{
			Servant_3++;
		}


	}


	cout << "Trial: " << Trial << endl;
	cout << "Servant_5: " << Servant_5 << "    Servant_4: " << Servant_4 << endl;
	cout << "Craft_5: " << Craft_5 << "    Craft_4: " << Craft_4 << endl;
	cout << "Servant_3: " << Servant_3 << "    Craft_3: " << Craft_3 << endl;

}

void Summon(int Summon_Times)
{
	int Servant_5 = 0;
	int Servant_4 = 0;
	int Servant_3 = 0;

	int Craft_5 = 0;
	int Craft_4 = 0;
	int Craft_3 = 0;

	long Trial = 0;

	// A. Define the lagged Fibonacci and Normal objects
	boost::lagged_fibonacci607 rng;
	rng.seed(static_cast<boost::uint32_t> (std::time(0)));
	boost::uniform_real<> uni(0.0, 100.0);

	boost::variate_generator<boost::lagged_fibonacci607&, boost::uniform_real<> >
		uniRng(rng, uni);

	for (long n = 1; n <= Summon_Times; ++n)
	{
		double outcome = uniRng();

		if (outcome <= 0.6)
		{
			Servant_5++;
			Trial = n;
			cout << "Up servant get." << endl;
			break;
		}

		if (outcome <= 1.0 && outcome > 0.6)
		{
			Servant_5++;
		}

		if (outcome <= 4.0 && outcome > 1.0)
		{
			Servant_4++;
		}

		if (outcome <= 8.0 && outcome > 4.0)
		{
			Craft_5++;
		}

		if (outcome <= 20.0 && outcome > 8.0)
		{
			Craft_4++;
		}

		if (outcome <= 60.0 && outcome > 20.0)
		{
			Craft_3++;
		}

		if (outcome <= 100.0 && outcome > 60.0)
		{
			Servant_3++;
		}

		if (n == Summon_Times)
		{
			cout << "Saint quartz run out...." << endl;
			Trial = Summon_Times;
		}

	}


	cout << "Trial: " << Trial << endl;
	cout << "Servant_5: " << Servant_5 << "    Servant_4: " << Servant_4 << endl;
	cout << "Craft_5: " << Craft_5 << "    Craft_4: " << Craft_4 << endl;
	cout << "Servant_3: " << Servant_3 << "    Craft_3: " << Craft_3 << endl;
}



#endif