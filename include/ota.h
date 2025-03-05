//
// Created by Melanie on 23/02/2025.
//

#ifndef LIGHTSWITCH_OTA_H
#define LIGHTSWITCH_OTA_H

#include <string>

class Ota
{
public:
    Ota() = default;
    explicit Ota(std::string serverUri);
    bool update(bool restart = true);
    bool update(std::string from, bool restart = true);
    inline void setServerUri(const std::string from) { m_serverUri = from; };

private:
    static esp_err_t http_event_handler(esp_http_client_event_t *evt);

    std::string m_serverUri;
};


#endif //LIGHTSWITCH_OTA_H
