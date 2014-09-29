/**
 * @struct blkin_endpoint
 * Information about an endpoint of our instrumented application where
 * annotations take place
 * */ 
struct blkin_endpoint {
    char *ip;
    int port;
    char *name;
};

/**
 * @struct blkin_trace
 * Struct used to define the context in which an annotation happens
 * */
struct blkin_trace {
    char *name;
    struct blkin_trace_info info;
    struct blkin_endpoint *trace_endpoint;
};
