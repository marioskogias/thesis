struct zipkin_trace {
    char trace_name[20];
    char service_name[20];
    int port;
    char ip;
    long trace_id;
    long span_id;
    long parent_span_id;
    int kind; // 0 for timestamp 1 for key-val
    char key[20];
    char val[50];
    uint64_t timestamp;
};
