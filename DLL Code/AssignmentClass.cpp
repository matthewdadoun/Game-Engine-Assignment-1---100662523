//Matthew Dadoun - 100662523
#include "AssignmentClass.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
void AssignmentClass::saveCoordinates(float x, float z)
{
	outfile.open("saves.txt");
	outfile << x << "\n" << z;
	outfile.close(); 
}

float AssignmentClass::LoadCoordinateX()
{
	infile.open("saves.txt");
	std::string finalX;
	std::getline(infile, finalX);
	float f = std::strtof(finalX.c_str(), nullptr);
	savedX = f;
	infile.close();
	return savedX;
}

float AssignmentClass::LoadCoordinateZ()
{
	infile.open("saves.txt");
	std::string finalZ;
	float f;
	while (std::getline(infile, finalZ))
	{
		f = std::strtof(finalZ.c_str(), nullptr);
		savedZ = f;
	}
	infile.close();
	return savedZ;
}

