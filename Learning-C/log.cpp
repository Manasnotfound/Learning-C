#include <iostream>

class Log
{
public:

	enum Level
	{
		LevelError, LevelWarning, LevelInfo
	};

	private:
		Level m_logLevel = LevelInfo;
	public:
		void SetLevel(Level level)
		{
			m_logLevel = level;
		}
		void Error(const char* message)
		{
			if (m_logLevel >= LevelError)
				std::cout << "Error: " << message << std::endl;
		}
		void Warn(const char* message)
		{
			if (m_logLevel >= LevelWarning)
			{
				std::cout << "Warning: " << message << std::endl;
			}
		}
		void Info(const char* message)
		{
			if (m_logLevel >= Level::LevelInfo)
			{
				std::cout << "Info: " << message << std::endl;
			}
		}
};

int main()
{
	Log logger;
	logger.SetLevel(Log::LevelError);
	logger.Error("This is an error message.");
	logger.Warn("This is a warning message.");
	logger.Info("This is an info message.");

} 