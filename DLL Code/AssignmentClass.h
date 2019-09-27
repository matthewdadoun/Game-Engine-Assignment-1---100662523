#pragma once
#include "PluginSettings.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>

class PLUGIN_API AssignmentClass
{
public:
	float savedX =2.0f, savedZ=3.0f;
	std::ifstream infile;
	std::ofstream outfile;
	void saveCoordinates(float x, float y);
	float LoadCoordinateX();
	float LoadCoordinateZ();


};