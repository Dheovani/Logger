#include <iostream>
#include "Logger.h"

#define LOGGER Logger(__FILE__)

int main(void)
{
	// Default strategy: Trace
	LOGGER << "Logging a message";

	LOGGER.Info("Info message");
	LOGGER.Debug("Debug message");
	LOGGER.Trace("Trace message");
	LOGGER.Warning("Warning message");
	LOGGER.Error("Error message");

	return 0;
}