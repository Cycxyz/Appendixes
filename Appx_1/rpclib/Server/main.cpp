#include <rpc/server.h>

int main() {
    rpc::server server(8080);

    server.bind("hello", []{ return "Hello World"; });

    server.run();

    return 0;
}