#include <rpc/client.h>
#include <iostream>

int main() {
    rpc::client client("localhost", 8080);
    
	std::string result = client.call("hello").as<std::string>();
	
    std::cout << result << std::endl;

    return 0;
}