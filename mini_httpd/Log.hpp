#pragma once

#include <iostream>
#include <string>
#include <sys/time.h>

#define Notice  1
#define Warning 2
#define Error   3
#define Fatal   4

enum ERR{
    SocketErr=1,
    BindErr,
    ListenErr,
    ArgErr
};

#define LOG(level, message) \
    Log(#level, message, __FILE__, __LINE__)


void Log(std::string level, std::string message, std::string filename, size_t line)
{
    struct timeval curr;
    gettimeofday(&curr, nullptr);
//    std::cout << "[ " << level << " ]" << "[ " << message << " ]" << "[" << curr.tv_sec <<"]" << "[" << filename << "]" << "[" << line << "]" << std::endl;
}
