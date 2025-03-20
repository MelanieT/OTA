//
// Created by Melanie on 23/02/2025.
//

#ifndef LIGHTSWITCH_OTA_H
#define LIGHTSWITCH_OTA_H

#include <string>
#include "esp_http_client.h"

class Ota
{
public:
    Ota();
    bool update();

private:
    static esp_err_t http_event_handler(esp_http_client_event_t *evt);
};


#endif //LIGHTSWITCH_OTA_H
