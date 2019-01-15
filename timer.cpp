#include "Signal.h"


double* Timer(Signal s1, Signal s2, Signal s3, Signal s4)
{
	double cars[4] = { s1.num_vehicles, s2.num_vehicles, s3.num_vehicles, s4.num_vehicles };
	double timers[4] = { s1.timer,s2.timer,s3.timer,s4.timer };
	int i, j;
	double mid;
	bool swapped;
	for (i = 0; i < 3; i++)
	{
		swapped = false;
		for (j = 0; j < 3; j++)
		{
			if (cars[j] > cars[j + 1])
			{
				mid = cars[j + 1];
				cars[j + 1] = cars[j];
				cars[j] = mid;
				swapped = true;

			}
		}

		if (swapped == false)
			break;
	}

	for (i = 0; i < 4; i++)
	{
		double ratio = cars[i] / cars[i + 1];
		if (i == 3)
			ratio = cars[3] / cars[0];
		timers[i] = 60 * ratio  *0.5;
		if (timers[i] > 20)
			timers[i] = 20;
		if (timers[i] < 10)
			timers[i] = 10;

	}

	cout << s1.num_vehicles << " " << s2.num_vehicles << " " << s3.num_vehicles << " " << s4.num_vehicles << endl;
	cout << cars[0] << " " << cars[1] << " " << cars[2] << " " << cars[3] << endl;
	cout << timers[0] << " " << timers[1] << " " << timers[2] << " " << timers[3] << endl;


	double stimers[4];
	for (int i = 0; i < 4; i++)
	{
		if (s1.num_vehicles == cars[i])
			stimers[0] = timers[i];
	    if (s2.num_vehicles == cars[i])
			stimers[1] = timers[i];
		if (s3.num_vehicles == cars[i])
			stimers[2] = timers[i];
        if (s4.num_vehicles == cars[i])
			stimers[3] = timers[i];
	}
	cout << stimers[0] << " " << stimers[1] << " " << stimers[2] << " " << stimers[3] << endl;
	return stimers;
}