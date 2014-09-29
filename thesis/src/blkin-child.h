/**
* Initialize a new blkin_trace with the information given. The new trace will
* have no parent so the parent id will be zero.
*
* @param new_trace the blkin_trace to be initialized
* @param name the trace's name
* @param endpoint a pointer to a blkin_endpoint struct that contains info about
* where the specif trace takes place
*
* @returns 1 if success -1 if error
*/
int _blkin_init_new_trace(struct blkin_trace *new_trace, char *name,
        struct blkin_endpoint *endpoint);

/**
* Initialize a blkin_trace as a child of the given parent bkin_trace. The child
* trace will have the same trace_id, new span_id and parent_span_id its
* parent's span_id.
*
* @param child the blkin_trace to be initialized
* @param parent the parent blkin_trace
* @param child_name the blkin_trace name of the child
*
* @returns 1 if success -1 if error
*/
int _blkin_init_child(struct blkin_trace *child, struct blkin_trace *parent,
        struct blkin_endpoint *endpoint,
        char *child_name);

/**
* Initialize a blkin_trace struct and set the blkin_trace_info field to be
* child of the given blkin_trace_info. This means
* Same trace_id
* Different span_id
* Child's parent_span_id == parent's span_id
*
* @param child the new child blkin_trace_info
* @param info the parent's blkin_trace_info struct
* @param child_name the blkin_trace struct name field
*
* @returns 1 if success -1 if error
*/
int _blkin_init_child_info(struct blkin_trace *child,
        struct blkin_trace_info *info, struct blkin_endpoint *endpoint,
        char *child_name);
