#pragma once
#include "IApplication.hpp"

namespace E
{
    class BaseApplication: implements IApplication
    {
    public:
        virtual int Initialize();
        virtual void Finalize();
        virtual void Tick();
        virtual bool IsQuit();
    private:
        bool m_bQuit;
    };
} // namespace E
