#include "Signal.h"



int main()
{
	Signal s1(15);
	Signal s2(24);
	Signal s3(9);
	Signal s4(4);
	
	
	double *timers = Timer(s1, s2, s3, s4);
	
	s1.timer = timers[0];
	s2.timer = timers[1];
	s3.timer = timers[2];
	s4.timer = timers[3];

	cout << s1.timer << s2.timer << s3.timer << s4.timer;

	s1.open(s1.timer);
	s2.open(s2.timer);
	s3.open(s3.timer);
	s4.open(s4.timer);
	
		
	system("pause");
	return 0;
}