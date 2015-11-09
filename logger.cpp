#include "logger.h"

Logger::Logger()
{

}

Logger::~Logger()
{
    if(m_log.is_open())
    {
        m_log << std::endl;
        m_log << "Mission Complete. Close the log" << std::endl;
        m_log.close();
    }
}

Logger& Logger::getInstance()
{
    static Logger m_Instance;
    return m_Instance;
}

bool Logger::logSetup(const std::string &fn)
{
    m_filename = fn;
    m_log.open(m_filename.c_str());

    // check log.txt is create and write the first line
    if( m_log.is_open())
    {
        m_log << "Log file create successful " << m_filename;
        return true;
    }
    return false;
}

std::ostream& Logger::log(const LogLevel m_level)
{
    // format the new line
    m_log << std::endl;
    m_log << '\t';
    switch(m_level)
    {
    case Logger::LogLevel::ERROR :
            m_log << "[Error]  : ";
            break;
        case Logger::LogLevel::WARNING:
            m_log << "[Warning]: ";
            break;
        case Logger::LogLevel::INFO:
            m_log << "[INFO]   : ";
            break;
        case Logger::LogLevel::DEBUG:
            m_log << "[DEBUG]  : ";
            break;
        case Logger::LogLevel::DEBUG1:
            m_log << "[DEBUG1] : ";
            break;
        case Logger::LogLevel::DEBUG2:
            m_log << "[DEBUG2] : ";
            break;
        case Logger::LogLevel::DEBUG3:
            m_log << "[DEBUG3] : ";
            break;
        default:
            break;
    }

    return m_log;
}

