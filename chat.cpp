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
    int portNum = 1500;
    bool isExists = false;
    int bufsize = 1024;
    char buffer[bufsize];

    struct sockaddr_in_server_add;
    socklen_t size;

    //init socket
    client = socket(AF_INET,SOCK_STREAM,0);

    if(client < 0){
        cout<<<<endl;
    }
    cout<<client<<endl;
}
