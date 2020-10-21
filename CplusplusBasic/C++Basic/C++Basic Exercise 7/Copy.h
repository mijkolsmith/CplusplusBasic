#pragma once
#include <iostream>
#include <fstream>
#include <string>
class Copy {
private:
	std::ifstream inStream1;
	std::ifstream inStream2;
	std::ofstream outStream;
public:
	void copyFile(std::string source, std::string destination);
	void copyBackwards(std::string source, std::string destination);
	void copyLineForLine(std::string source1, std::string source2, std::string destination);
};