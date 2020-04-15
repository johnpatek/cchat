#include <iocolors.h>

typedef struct
{
    int a;
} 
cchat_client_t;

int cchat_client_argparse(
    cchat_client_t * const client, 
    const char ** const args, 
    const uint32_t argc);

int cchat_client_init(
    cchat_client_t * const client);

typedef struct
{
    int a;
} 
cchat_server_t;
