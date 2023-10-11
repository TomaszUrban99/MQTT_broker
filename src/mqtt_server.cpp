#include "../inc/mqtt_server.hh"

#include <cstring>
#include <iostream>
#include <stdexcept>
#include <sys/socket.h>

mqtt_server::mqtt_server(uint16_t portNumber){

    socket_id = socket(AF_INET, SOCK_DGRAM, 0);

    if ( socket_id == -1)
        throw std::runtime_error(strerror(errno));
}