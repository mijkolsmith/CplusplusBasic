#include "pch.h"
#include "Copy.h"
//C:\Users\Michael\Documents\CplusplusBasic\CplusplusBasic\C++Basic

int main()
{
	Copy copy;
	copy.copyBackwards("source.txt", "destination.txt");
	copy.copyLineForLine("source1.txt", "source2.txt", "destination2.txt");
	return 0;
}