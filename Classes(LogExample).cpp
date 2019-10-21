#include <iostream>

using namespace std;

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2; 

private: 
	int m_LogLevel = LogLevelInfo; //sets default log level to LogLevelInfo`
	
public:
	void SetLevel(int level) //function that sets level of log
	{
		m_LogLevel = level;
	}
		
	void Warn(const char* message) //Warning function that prints warning message
	{
		if (m_LogLevel >= LogLevelWarning)
			cout << "[WARNING]: "<< message << endl; // prints warning message
	}
	
	void Error(const char* message) //Warning function that prints warning message
	{
		if (m_LogLevel >= LogLevelError)
			cout << "[ERROR]: "<< message << endl; // prints warning message
	}
	
	void Info(const char* message) //Warning function that prints warning message
	{
		if (m_LogLevel >= LogLevelInfo)
			cout << "[MESSAGE]: "<< message << endl; // prints warning message
	}
};

int main()
{
	Log log;
	log.SetLevel(log.LogLevelError); //sets log level
	log.Warn("Hello!"); 
	log.Error("Hello!");
	log.Info("Hello!");
	
}
