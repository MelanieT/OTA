idf_component_register(SRCS "ota.cpp" "include/ota.h"
    INCLUDE_DIRS ./include
    REQUIRES esp_https_ota esp_partition
    )
