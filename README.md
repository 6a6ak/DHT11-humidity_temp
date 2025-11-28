## DHT11 humidity & temperature example for the Arduino Uno.

**Hardware**

- **Board:** `Arduino Uno`.
- **Sensor:** `DHT11` temperature and humidity sensor.

**Wiring**

- **VCC:** Connect to `5V` on the Arduino.
- **GND:** Connect to `GND` on the Arduino.
- **DATA:** Connect the sensor data pin to a digital pin (for example `D2`).
- **Pull-up resistor:** Use a `4.7kΩ`–`10kΩ` resistor between `DATA` and `VCC` if the sensor/module does not already include one.

**Usage**

- Open the Arduino IDE.
- Select board: `Tools` → `Board` → `Arduino Uno`.
- Open the sketch file `dht11-humidity-temp970228.ino.ino` in this repository.
- If your sketch depends on a DHT library, install one such as the `DHT sensor library` by Adafruit or another compatible library via `Sketch` → `Include Library` → `Manage Libraries...`.
- Compile and upload the sketch to your Arduino.
- Open `Tools` → `Serial Monitor` and set the baud rate (commonly `9600`) to view readings.

**Files**

- `dht11-humidity-temp970228.ino.ino`: Arduino sketch for reading temperature and humidity from the DHT11 sensor.
- `README.md`: This file.
- `LICENSE`: Project license (MIT).

**License**

This project is licensed under the [MIT License](LICENSE).
