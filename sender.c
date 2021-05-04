#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include<time.h>

#define SERVER_PORT 5067
#define SIZE 2000
#define SERVER_IP_ADDRESS "127.0.0.1"
char buffer[SIZE];
socklen_t length;

void send_file(FILE *fp, int sockfd);
void send_5_times(char* op);
