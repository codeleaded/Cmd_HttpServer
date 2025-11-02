#include "/home/codeleaded/System/Static/Library/HttpServer.h"

int main() {
    HttpServer hs = HttpServer_New(8080);
    if(hs.ok){
        HttpServer_Start(&hs);
        Thread_Join(&hs.listener);
    }
    HttpServer_Free(&hs);

    return 0;
}
