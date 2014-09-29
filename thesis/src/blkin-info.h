/**
 * @struct blkin_trace_info
 * The information exchanged between different layers offering the needed
 * trace semantics
 * */
struct blkin_trace_info {
    int64_t trace_id;
    int64_t span_id;
    int64_t parent_span_id;
};
