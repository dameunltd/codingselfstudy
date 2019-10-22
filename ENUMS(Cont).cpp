#include <iostream>
#include <cstring>

using namespace std;

class Log
{
public:
	enum Level
	{
		LevelError, LevelWarning, LevelInfo
	};
	

private: 
	Level m_LogLevel = LevelInfo; //sets default log level to LogLevelInfo`
	
public:
	void SetLevel(Level level) //function that sets level of log
	{
		m_LogLevel = level;
	}
		
	void Warn(const char* message) //Warning function that prints warning message
	{
		if (m_LogLevel >= LevelWarning)
			cout << "[WARNING]: "<< message << endl; // prints warning message
	}
	
	void Error(const char* message) //Warning function that prints warning message
	{
		if (m_LogLevel >= LevelError)
			cout << "[ERROR]: "<< message << endl; // prints warning message
	}
	
	void Info(const char* message) //Warning function that prints warning message
	{
		if (m_LogLevel >= LevelInfo)
			cout << "[MESSAGE]: "<< message << endl; // prints warning message
	}
};

int guess;

int main()
{
	Log log;

	std::cout<<"Guess a number between 1-10: ";
	cin>>guess;
	
	if (guess >= 8)
	{
		log.SetLevel(Log::LevelError); //sets log level
	}
	
	if (guess < 8 && guess > 2)
	{
		log.SetLevel(Log::LevelWarning);
	}
	
	else if (guess == 1)
	{
		log.SetLevel(Log::LevelInfo);
	}

	log.Warn("You're getting closer!"); 
	log.Error("Too high!");
	log.Info("DING DING DING! YOU WON NOTHING!");
	
}
