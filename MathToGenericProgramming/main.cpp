#include <iostream>
#include <vector>
#include <ctime>

#include "Exercise_3_2.h"

// Exercise

void exercise_3_2();

// Main

int main() {

	exercise_3_2();

	return 0;
}

/* Exercise 3.2 */

void exercise_3_2() {

	std::cout << "Exercise 3.2" << std::endl << std::endl;

	/*
		uint64_t is faster then uint32_t. why?
	*/


	/* Time */
	clock_t start, end;
	double duration;

	/* Test 32 */
	uint32_t n32 = 100000000;
	std::vector<bool> eratos32(n32);

	start = clock();
	sift<std::vector<bool>::iterator, uint32_t>(eratos32.begin(), n32);
	end = clock();

	duration = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time for uint32_t : " << duration << std::endl;

	/* Test 64 */
	uint64_t n64 = 10000000;
	std::vector<bool> eratos64(n64);

	start = clock();
	sift<std::vector<bool>::iterator, uint64_t>(eratos64.begin(), n64);
	end = clock();

	duration = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time for uint64_t : " << duration << std::endl;

	return;
}