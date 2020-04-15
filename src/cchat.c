#include "cchat.h"

static void cchat_client_usage();

int cchat_client_argparse(
    cchat_client_t * const client, 
    const char ** const args, 
    const uint32_t argc)
{
    int error;

    error = (argc != 5);

    if(error != 0)
    {
        cchat_client_usage();
    }

    return error;
}

int cchat_client_init(
    cchat_client_t * const client)
{
    return 0;
}

static void cchat_client_usage()
{
    eputs("usage: <address> <port>\n");
}