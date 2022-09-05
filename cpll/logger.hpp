#pragma once
#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>

#include "levels.hpp"

namespace cpll
{
    class logger
    {
        private:
            logLev level = log_WARN;
        
        public:
            logger() {}

            logger(logLev option) : level(option) {}

            template <typename T> void log(const T &msg)
            {
                switch (level)
                {
                case log_DEBUG:
                    std::cout << "{DEBUG}";
                    break;
                case log_INFO:
                    std::cout << "{INFO}";
                    break;
                case log_WARN:
                    std::cout << "{WARN}";
                    break;
                case log_ERROR:
                    std::cout << "{ERROR}";
                    break;
                default:
                    break;
                }

                std::cout << " " << msg << std::endl;
            }

            void setLevel(logLev option)
            {
                level = option;
            }
    };

} // namespace cpll

#endif // LOG_HPP