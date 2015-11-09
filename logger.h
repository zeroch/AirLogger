#ifndef LOGGER_H
#define LOGGER_H
#include <fstream>
#include <string>
/**
 * @brief The Logger class
 * write run time infomation into text file
 */

#define LOG(level) Logger::getInstance().log(level)

class Logger
{

public:
/* enum to get the log level */
enum LogLevel {
    ERROR = 0,
    WARNING,
    INFO,
    DEBUG,
    DEBUG1,
    DEBUG2,
    DEBUG3
};
/*
 * Singleton design pattern
 * @return instance of Logger
 */
    static Logger &getInstance();
    bool logSetup(const std::string &fn);
    std::ostream &log(const LogLevel m_level);

private:
    Logger();
    ~Logger();
    Logger(const Logger&) {}
    Logger& operator=(const Logger&) {return *this;}

    /* singleton pattern that constructor, copy constructor
     * and assign operator should be private to make sure
     * only one instance will be create
     */

/*
 * An instance of logger object
 */
//    static Logger* m_pLogger;
    std::string		m_filename;
    std::ofstream	m_log;
};

#endif // LOGGER_H
