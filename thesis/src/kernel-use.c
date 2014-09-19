#include <trace/events/subsys.h>

#define CREATE_TRACE_POINTS
DEFINE_TRACE(subsys_eventname);

void somefct(void)
{
    ...
        trace_subsys_eventname(arg, task);
    ...
}
