#include "HttpServer.hpp"
#include "Log.hpp"

static void Usage(std::string _porc)
{
    std::cout << "Usage: \n\t";
    std::cout << "method one: "<<_porc << "port\n\t";
    std::cout << "method two: "<<_porc << std::endl;
}

int main(int argc, char *argv[])
{
    if(argc != 1 && argc != 2){
        Usage(argv[0]);
        return 1;
    }
    HttpServer *svr = nullptr;
    if(argc == 1){
        svr = HttpServer::GetInstance(8081);
    }
    else{
        svr = HttpServer::GetInstance(atoi(argv[1]));
    }
    daemon(1, 1);
    svr->InitServer();
    svr->Start();
    return 0;
}
