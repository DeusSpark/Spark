#ifndef SPARK_LOGGER_HPP
#define SPARK_LOGGER_HPP

#include <map>
#include <string>

namespace sp
{
class Logger
{
public:
    enum Level
    {
        Trace,
        Info,
        Warning,
        Error,
        Fatal
    };

public:
    Logger();
    ~Logger();

    void log(Level level, const std::string& message);

private:
    std::map<Level, std::string> m_levelNames;
};
}; // namespace sp

#endif // SPARK_LOGGER_HPP