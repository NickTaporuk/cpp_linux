#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main()
{

    int client, server;
    int portNum =1500;
    bool isExists = false;
    int buffsize = 1024;
    char buffer[buffsize];

    struct sockarrd_in_server_addr;
    socklen_t size;

    client = socket(AF_INET,SOCK_STREAM,0);

    if(client < 0){
        std::cout<<"Error establishing connection"<< std::endl;
        exit(1);
    }

    std::cout<<"ServerSocket connection created ..."<< std::endl;


}
