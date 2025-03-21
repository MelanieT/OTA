//
// Created by Melanie on 23/02/2025.
//

#include <esp_http_client.h>
#include <esp_https_ota.h>

#include <utility>
#include "ota.h"

bool Ota::update()
{
    esp_http_client_config_t config;
    memset(&config, 0, sizeof(config));

    config.url = CONFIG_OTA_SERVER_URI;
    config.event_handler = http_event_handler;

    esp_https_ota_config_t ota_config;
    memset(&ota_config, 0, sizeof(ota_config));

    ota_config.http_config = &config;

    esp_err_t ret = esp_https_ota(&ota_config);
    if (ret == ESP_OK)
        esp_restart();

    return false;
}

esp_err_t Ota::http_event_handler(esp_http_client_event_t *evt)
{
    return ESP_OK;
}
