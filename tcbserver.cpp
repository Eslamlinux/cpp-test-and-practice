#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

static void die(char* m)
{
    perror(m);
    exit(1);
}

int main(void)
{
    int s = socket(AF_INET,SOCK_STREAM,0);
    if(s < 0) 
    die("socket");
}
int opt = 1;
if(setsockopt(s,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt))<0)
{
    die("setsocket");
}
struct sockaddr_in a = {0};
a.sin_falmily = AF_INET;
a.sin_addr.s_addr = htonl(INADDR_ANY);
a.sin_port = htons(8080);