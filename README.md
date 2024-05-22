# SmartRemote
## Prerequisites

- [Arduino IDE](https://www.arduino.cc/en/Main/Software) installed on your computer.

## Installation Steps

1. **Open Arduino IDE**

    Launch the Arduino IDE on your computer.

2. **Open Preferences**

    Go to `File` -> `Preferences`.

3. **Add ESP32 Board URL**

    In the `Additional Boards Manager URLs` field, add the following URL:

    ```
    https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
    ```

    If there are multiple URLs, separate them with commas.

4. **Open Boards Manager**

    Go to `Tools` -> `Board` -> `Boards Manager`.

5. **Install ESP32 Platform**

    In the Boards Manager, search for `ESP32` and click on the `Install` button for `esp32` by Espressif Systems. Ensure you install version `2.0.9`.

6. **Select ESP32-C3 Board**

    After installation, go to `Tools` -> `Board` and select `ESP32C3 Dev Module`.

## Install Required Libraries

1. **Open Library Manager**

    Go to `Sketch` -> `Include Library` -> `Manage Libraries`.

2. **Install FastLED Library**

    - In the Library Manager, search for `FastLED`.
    - Find `FastLED` by `Daniel Garcia`.
    - Click on `Install` and ensure version `3.0.6` is installed.

3. **Install SHT4x Library**

    - In the Library Manager, search for `SHT4x`.
    - Find `SHT4x` by `Adafruit`.
    - Click on `Install` and ensure version `1.0.2` is installed.


