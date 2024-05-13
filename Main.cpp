#include <iostream>
#include "Logger.h"

class Test
{
public:
	void log(const char *msg, int line)
	{
		Logger logger(*this, line);
		logger.Info(msg);
	}
};

int main(void)
{
	// Default strategy: Trace
	LOGGER << "Logging a message";

	Test t;
	t.log("Teste", __LINE__);

	return 0;
}