#include <iostream>
#include <chrono>
// #include <thread>

struct Time_Count
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

    Time_Count()
    {   
        start = std::chrono::steady_clock::now();
    };

    ~Time_Count()
    {
        end = std::chrono::steady_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << "time cost:" << ms << "ms" << std::endl;
    };
};
