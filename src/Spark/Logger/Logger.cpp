#include <Spark/Logger/Logger.hpp>
#include <iostream>

namespace sp
{
Logger::Logger()
{
    m_levelNames.insert(std::make_pair(Trace, "Trace"));
    m_levelNames.insert(std::make_pair(Info, "Info"));
    m_levelNames.insert(std::make_pair(Warning, "Warning"));
    m_levelNames.insert(std::make_pair(Error, "Error"));
    m_levelNames.insert(std::make_pair(Fatal, "Fatal"));
}

Logger::~Logger()
{
}

void Logger::log(Level level, const std::string& message)
{
    std::cout << "[" << m_levelNames[level] << "]"
              << "\t" << message << std::endl;

    // TODO: write to file
    // TODO: thread safety
}

}; // namespace sp