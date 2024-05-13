# Logger 📝

Logger is a lightweight C++ library for logging messages to various outputs with customizable log levels.

## Features
🔹 Multiple log levels: INFO, DEBUG, TRACE, WARNING and ERROR  
🔹 Customize log format and output destination  
🔹 Easy integration into existing C++ projects  

## Usage
1. Include `Logger.h` in your C++ project.
2. Create an instance of the `Logger` class.
3. Use `<<` operator or any method to log messages at different levels.

```cpp
#include "Logger.hpp"

int main() {
    // Macro logging
    LOGGER << "Default operation is ERROR";

    Logger logger(__FILE__, __LINE__);
    logger.Log(LogLevel::INFO, "This is an information message");
    logger.Log(LogLevel::ERROR, "Oops! Something went wrong");

    return 0;
}
```

## License
This project is licensed under the [MIT License](LICENSE.txt) - see the LICENSE file for details.
Feel free to adjust it according to your preferences or add more details!