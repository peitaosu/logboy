// logboy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "TraceLogging.h"

int main()
{
    char sampleValue[] = "Sample value";

    // Register the provider
    TraceLoggingRegister(g_logboyProvider);
    // Log an event
    TraceLoggingWrite(g_logboyProvider,
        "Event",
        TraceLoggingValue(sampleValue, "Message"));
    // Stop TraceLogging and unregister the provider
    TraceLoggingUnregister(g_logboyProvider);

    return 0;
}

