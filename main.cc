#include <drogon/drogon.h>
#include <drogon/HttpSimpleController.h>
#include <drogon/HttpViewData.h>
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include <filesystem>
#include <regex>
#include <string>

using namespace drogon;
namespace fs = std::filesystem;

int main() {
    std::string pwd = std::filesystem::current_path();
    //Set HTTP listener address and port
    //drogon::app().addListener("0.0.0.0",8080);
    drogon::HttpAppFramework::instance()
        .registerHandler("/principal",
                        [=](const HttpRequestPtr &req,
                            std::function<void (const HttpResponsePtr &)> &&callback)
                        {
                            MultiPartParser FileUpload;
                            auto resp=HttpResponse::newHttpViewResponse("listarArquivos.csp");
                            resp->setStatusCode(k200OK);
                            callback(resp);
                        });

    drogon::HttpAppFramework::instance()
        .registerHandler(
            "/baixarArquivo/{}",
            [](const HttpRequestPtr &req,
                std::function<void(const HttpResponsePtr &)> &&callback, std::string caminhoArquivo){
                    std::string arquivoSaida = "teste";
                    caminhoArquivo = std::regex_replace(caminhoArquivo, std::regex("@"), "/");
                    auto resp = HttpResponse::newFileResponse(caminhoArquivo.c_str(), arquivoSaida.c_str(), CT_NONE);
                    callback(resp);
                }
    );
    app()
        .setClientMaxBodySize(20 * 2000 * 2000)
        .setUploadPath(pwd)
        .addListener("127.0.0.1",5055)
        .run();
    return 0;
}