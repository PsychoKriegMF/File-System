#pragma once

#include <iostream>
#include "Functions.h"
#include <string>
#include <fstream>


bool statistic(std::string str) {
	static std::ofstream out;
	out.open("stats.txt", std::ios::app);
	if (out.is_open()) {
		out << str << ' ' << str.length() << '\n';
		out.close();
		return true;
	}
	return false;
}