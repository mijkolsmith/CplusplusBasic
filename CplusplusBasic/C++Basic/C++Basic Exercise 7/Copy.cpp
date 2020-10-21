#include "pch.h"
#include "Copy.h"

void Copy::copyFile(std::string source, std::string destination)
{
	inStream1.open(source);
	if (!inStream1) {
		std::cout << "Probleem bij openen source.txt" << std::endl;
		exit(1);
	}

	outStream.open(destination);
	if (!outStream) {
		std::cout << "Probleem bij openen destination.txt" << std::endl;
		exit(2);
	}

	std::cout << "copying " << source << " into " << destination << std::endl;
	std::string line;
	while (std::getline(inStream1, line))
	{
		outStream << line << std::endl;
	}

	/* Dit werkt ook:
	char ch;
	while (inStream >> std::noskipws >> ch) {
		outStream << ch;
	}*/

	inStream1.close();
	outStream.close();
}

void Copy::copyBackwards(std::string source, std::string destination)
{
	inStream1.open(source);
	if (!inStream1) {
		std::cout << "Probleem bij openen source.txt" << std::endl;
		exit(1);
	}

	outStream.open(destination);
	if (!outStream) {
		std::cout << "Probleem bij openen destination.txt" << std::endl;
		exit(2);
	}

	std::cout << "copying " << source << " backwards into " << destination << std::endl;
	int j = 1;
	char ch;
	while (inStream1 >> std::noskipws >> ch) {
		inStream1.seekg(-j, inStream1.end);
		if (j != 1) //otherwise we will print the first character 'V'
		{
			outStream << ch;
		}
		j++;
	}

	inStream1.close();
	outStream.close();
}

void Copy::copyLineForLine(std::string source1, std::string source2, std::string destination)
{
	inStream1.open(source1);
	if (!inStream1) {
		std::cout << "Probleem bij openen source.txt" << std::endl;
		exit(1);
	}

	inStream2.open(source2);
	if (!inStream2) {
		std::cout << "Probleem bij openen source.txt" << std::endl;
		exit(1);
	}

	outStream.open(destination);
	if (!outStream) {
		std::cout << "Probleem bij openen destination.txt" << std::endl;
		exit(2);
	}

	std::cout << "copying " << source1 << " and " << source2 << " line for line into " << destination << std::endl;
	std::string line1;
	std::string line2;
	while (std::getline(inStream1, line1) && std::getline(inStream2, line2))
	{
		outStream << line1 << std::endl << line2 << std::endl;
	}

	inStream1.close();
	inStream2.close();
	outStream.close();
}
