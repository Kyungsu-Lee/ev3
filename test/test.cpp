#include <unistd.h>
#include <cstdio>
#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <stdexcept>

#include "ev3dev.h"

using namespace ev3dev;	//delete

int main ()
{
	motor a = {OUTPUT_B};
	motor b = {OUTPUT_C};
	motor c = {OUTPUT_A};

	sensor p = {INPUT_1};
	sensor q = {INPUT_2};

	int speed = 300;
	int index = 0;
	int time = 0;

	vector<int> location;

	a.set_position_sp(900);
	a.set_speed_sp(300);
	a.run_to_rel_pos();

	while(a.get_position() != 900)
	{
		if(q.getValue() == 1)
			vector.push_bacl(a.get_position());
	}

	a.set_position_sp(0);
	a.set_speed_sp(-300);
	a.run_to_rel_pos();	

}

