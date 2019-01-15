#pragma once
#include<iostream>
#include<conio.h>
#include <time.h>
#include <stdio.h>

using namespace std;

class Signal
{
public:
	int num_vehicles;
	int timer;
	Signal(int n)
	{
		num_vehicles = n;
	};

	void display()
	{

		cout << timer << " ";
		timer -= 1;

	}

	void open(Signal)
	{
		cout << "Time left for signal to be green: ";
		while (timer > 0)
		{
			timer = timer--;
			cout << timer << " ";
		}
		cout << endl;
	}
};

double* Timer(Signal s1, Signal s2, Signal s3, Signal s4);