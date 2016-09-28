#include "Sensor.h"

Sensor::Sensor(std::string sensorName) : name(sensorName)
{
}

Sensor::~Sensor()
{
}

std::string Sensor::getName()
{
	return name;
}

bool Sensor::ping()
{
	return false;
}

void * Sensor::getCachedData()
{
	return nullptr;
}

bool Sensor::getSensorData()
{
	return false;
}
