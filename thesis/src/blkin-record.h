/**
* @typedef blkin_annotation_type
* There are 2 kinds of annotation key-val and timestamp
*/
typedef enum {
    ANNOT_STRING = 0,
    ANNOT_TIMESTAMP
} blkin_annotation_type;

/**
* @struct blkin_annotation
* Struct carrying information about an annotation. This information can either
* be key-val or that a specific event happened
*/
struct blkin_annotation {
    blkin_annotation_type type;
    char *key;
    char *val;
    struct blkin_endpoint *annotation_endpoint;
};

/**
* Initialize a key-value blkin_annotation
*
* @param annotation the annotation to be initialized
* @param key the annotation's key
* @param val the annotation's value
* @param endpoint where did this annotation occured
*
* @returns 1 if success -1 if error
*/
int _blkin_init_string_annotation(struct blkin_annotation *annotation, char *key,
        char *val,
        struct blkin_endpoint * endpoint);

/**
* Initialize a timestamp blkin_annotation
*
* @param annotation the annotation to be initialized
* @param event the event happened to be annotated
* @param endpoint where did this annotation occured
*
* @returns 1 if success -1 if error
*/
int _blkin_init_timestamp_annotation(struct blkin_annotation *annot, char *event,
        struct blkin_endpoint * endpoint);

/**
* Log an annotation in terms of a specific trace
*
* @param trace the trace to which the annotation belongs
* @param annotation the annotation to be logged
*
* @returns 1 if success -1 if error
*/
int _blkin_record(struct blkin_trace *trace,
        struct blkin_annotation *annotation);
