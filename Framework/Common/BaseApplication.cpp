#include "BaseApplication.hpp"

int E::BaseApplication::Initialize()
{
    m_bQuit = false;
    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files.
void E::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void E::BaseApplication::Tick()
{
}

bool E::BaseApplication::IsQuit()
{
        return m_bQuit;
}