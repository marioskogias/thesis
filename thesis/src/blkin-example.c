#include <blkin-front.h>

int main() {
    r = blkin_init();
    if (r < 0) {
        fprintf(stderr, "Could not initialize blkin\n");
        exit(1);
    }

    /*initialize endpoint*/
    struct blkin_endpoint endp;
    blkin_init_endpoint(&endp, "10.0.0.1", 5000, "service a");

    /*Initialize trace*/
    struct blkin_trace trace;
    blkin_init_new_trace(&trace, "process a", &endp);

    /*Initialize annotation*/
    struct blkin_annotation ant;
    blkin_init_timestamp_annotation(&ant, "Test annotation", &endp);
    
    /*Log a timestamp event*/    
    blkin_record(&trace, &ant);
}
