#include <iocolors.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")
typedef SOCKET cchat_socket_t;

#else

typedef int32_t cchat_socket_t;


#endif

typedef struct
{
    cchat_socket_t snd_sock;
    cchat_socket_t rcv_sock;
    
} 
cchat_client_t;

typedef struct
{
    cchat_socket_t srv_sock;
    int a;
} 
cchat_server_t;

int cchat_client_argparse(
    cchat_client_t * const client, 
    const char ** const argv, 
    const uint32_t argc);

int cchat_client_init(
    cchat_client_t * const client);
