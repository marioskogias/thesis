TRACEPOINT_EVENT(
        zipkin,
        keyval,
        TP_ARGS(char *, trace_name, char *, service, 
            int, port, char *, ip, long, trace, 
            long, span, long, parent_span, 
            char *, key, char *, val ),
        
        TP_FIELDS(
                /*
                 * Each span has a name mentioned on it in the UI
                 * This is the trace name 
                 */
                ctf_string(trace_name, trace_name)
                /*
                 * Each trace takes place in a specific machine-endpoint
                 * This is identified by a name, a port number and an ip
                 */
                ctf_string(service_name, service)
                ctf_integer(int, port_no, port)
                ctf_string(ip, ip)
                /*
                 * According to the tracing semantics each trace should have
                 * a trace id, a span id and a parent span id 
                 */
                ctf_integer(long, trace_id, trace)
                ctf_integer(long, span_id, span)
                ctf_integer(long, parent_span_id, parent_span)
                /*
                 * The following is the real annotated information
                 */
                ctf_string(key, key)
                ctf_string(val, val)
        ) 
)
TRACEPOINT_LOGLEVEL(
        zipkin, 
        keyval, 
        TRACE_WARNING)
