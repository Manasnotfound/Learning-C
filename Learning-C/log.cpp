#include <iostream>

class Log
{
	public:
		const int LogLevelError = 0;
		const int LogLevelWarning = 1;
		const int LogLevelInfo = 2;
	private:
		int m_logLevel = LogLevelInfo;
	public:
		void SetLevel(int level)
		{
			m_logLevel = level;
		}
		void Error(const char* message)
		{
			std::cout << "Error: " << message << std::endl;
		}
		void Warn(const char* message)
		{
			if (m_logLevel >= LogLevelWarning)
			{
				std::cout << "Warning: " << message << std::endl;
			}
		}
		void Info(const char* message)
		{
			if (m_logLevel >= LogLevelInfo)
			{
				std::cout << "Info: " << message << std::endl;
			}
		}
};

int main()
{
	Log logger;
	logger.SetLevel(logger.LogLevelInfo);
	logger.Error("This is an error message.");
	logger.Warn("This is a warning message.");
	logger.Info("This is an info message.");

} 