#ifndef MQTT_SERVER_HH
#define MQTT_SERVER_HH

#include <cstdint>
#include <iostream>
#include <string>

#include <sys/socket.h>
#include <netinet/in.h>

class mqtt_server{

    int socket_id;
    struct sockaddr_in server_address{};

    public:

    mqtt_server(uint16_t portNumber);
};

#endif