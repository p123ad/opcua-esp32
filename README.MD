# OPC UA Server on ESP32

An OPC UA running server on ESP32 board with a minimal information model to control a single led and receiving input from a push button

    LED         : GPIO 5
    BUTTON      : GPIO 4

It is tested with UAExpert.

### Prerequisites

- Hardware : Code was tested with the Olimex ESP32-POE-ISO (https://www.olimex.com/Products/IoT/ESP32/ESP32-POE-ISO/open-source-hardware)
- ESP-IDF : https://docs.espressif.com/projects/esp-idf/en/latest/get-started/

## Getting Started
The project was forked from [cmbahadir](https://github.com/cmbahadir/opcua-esp32)
Blog post with more information: [Selftronics](https://selftronics.com/2020/06/23/cheapest-embedded-opc-ua-server/)

It is required to have [ESP-IDF](https://github.com/espressif/esp-idf) prepared. For this project the [VS Code Extension](https://github.com/espressif/vscode-esp-idf-extension) was used.

    
Open62541.c and open62541.h are amalgamated OPC UA C stack files. If you want to dive into OPC UA part, please check Open62541 project.

If you want to build open62541.c/.h/.lib from source, be sure to apply the changes in [here](https://github.com/p123ad/opcua-esp32/blob/master/components/open62541lib/README.md) to make it compatible with FreeRTOS and xtensa-toolchain.

- Open62541 project is still being developed to make it easier. You can follow [this](https://github.com/open62541/open62541/pull/2511#issuecomment-732238526) long but useful thread to gain more knowledge about open62541's FreeRTOS compatibility.

- More about OPC UA stack: [Open62541](https://github.com/open62541/open62541)

### Configuration
Type of connection, Wi-Fi SSID, Wi-fi password and static ip configuration can be set through esp-idf's menuconfig tool. Beware that static ip is only supported for ethernet connection for now. Connection configuration can be done best from under "Connection configuration" on GUI Configuration Tool in VS Code
    
## License

This project is licensed under the Mozilla Public License Version 2.0 which is inherited from Open62541 project - see the [LICENSE.md](LICENSE.md) file for details.
