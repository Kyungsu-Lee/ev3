#include <unistd.h>
#include <cstdio>
#include <iostream>
#include <chrono>
#include <thread>
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

	bool down = false;
	bool up = false;
	bool right = false;
	bool left = false;
	bool enter = false;
	bool escape = false;

	int speed = 300;

	bool flag = true;

	int time = 0;

	while(escape == 0)
	{
		a.set_time_sp(500).set_speed_sp(-300).run_timed();
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		a.set_time_sp(500).set_speed_sp(300).run_timed();
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		b.set_time_sp(500).set_speed_sp(300).run_timed();
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		b.set_time_sp(500).set_speed_sp(-300).run_timed();
	}


	c.stop();
}

