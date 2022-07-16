#include<stdio.h>

/*
    #include<sys/types.h>
        -- contains definitions of a number of data types used in socket calls 
    
    #include<sys/socket.h>
    #include<netinet/in.h>
    #include<netdb.h>
    #include<arpa/inet.h>
*/

/*
    Port:
    different ports for different network services
*/

/*
    Port and service functions 

    struct servent *getservbyname(char *name, char *proto);
    struct servent *getservbyport(int port, char *proto);

    struct servent
    {
        char *s_name;
        char **s_aliases;
        int s_port;
        char *s_proto;
    }
*/

/*
    socket address structure
*/

/*
    struct sockaddr
    {
        unsigned short sa_family;
        char           sa_data[14];
    }
*/

/*
    struct sockaddr_in
    {
        short int           sin_family;
        unsigned short int  sin_port;
        struct in_addr      sin_addr;
        unsigned char       sin_zero[8];
    };
*/

/* 
    Some API's::

    int socket(int family, int type, int protocol);

    Connect API's -- used by the client 

    int connect(int sockfd, struct sockaddr *serv_addr, int addrlen);

        @sockfd-> is a socket file descriptor returned by the socket function 
        @serv_addr-> that holds the destination ip address and port 
        @addrlen-> simply returns the sizeof(struct sockaddr)
*/

/*
    bind function 

    int bind(int sockfd, struct sockaddr *my_addr, int addrlen);

        @my_addr--> it contains the local ip address or the servers ip address as it is being executed on the servers side 
            -- a 0 value for port number means the system will choose a random port number 
            -- and INADDR_ANY value for ip address means the servers ip address will be assigned automatically

        server.sin_port = 0;
        server.sin_addr.s_addr = INADDR_ANY;

        @addrlen-> simply returns the sizeof(struct sockaddr)
*/

/*
    listen function
    int listen (int sockfd, int backlog);
        @backlog is the max number of allowed connections
*/

/*
    accept function 
    int accept(int sockfd, struct sockaddr *cliaddr, socklen_t *addlen);

    recv function:
    int recv(int sockfd, void *buf, int len, unsigned int flags);

    write function:
    int write(int fildes, const void *buf, int nbyte);

    send function:
    int send(int sockfd, const void *msg, int len, int flags);

    read function:
    int read(int fildes, const void *buf, int nbyte);

    int shutdown(int sockfd, int how);
        @how --> 0 - receiving is not allowed 
                 1 - sending is not allowed 
                 2 - recv and sending is not allowed 
                 @how = 2 --> is as same as close();
*/







int main() {
    return 0;
}