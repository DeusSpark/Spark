#pragma once

#include <map>
#include <string>

namespace sp
{
class Engine;

class Logger
{
    friend class Engine;

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
    void log(Level level, const std::string& message);

private:
    Logger();
    ~Logger();

private:
    std::map<Level, std::string> m_levelNames;
};
}; // namespace sp
