#include "config.h"

#include "tcpflow.h"

int debug_level = DEFAULT_DEBUG_LEVEL;
int max_flows = 0;
int console_only = 0;
int suppress_header = 0;
int strip_nonprint = 0;
int use_color = 0;
u_int min_skip  = 1000000;
bool opt_no_purge = false;

const char *progname = 0;

#ifdef HAVE_PTHREAD
sem_t *semlock = 0;
#endif
