/*
 * file: sensor_types.cpp
 * author: nuy
 * date:2026-10-20
 * deskripsi: penggunana tipe data dalam IoT data sensor
 */

#include <cstdint>
#include <iostream>

struct SensorReading {
  std::int16_t temperatureDeciC;
  std::uint16_t adcRaw;
  std::uint32_t timestampSeconds;
};

int main() {
  SensorReading reading{
      263,  // 26.3 °C
      3072, // Raw ADC reading
      86400 // Seconds since a chosen epoch
  };

  std::cout << "Temperature: "
            << static_cast<double>(reading.temperatureDeciC) / 10.0 << " C\n";

  std::cout << "ADC: " << reading.adcRaw << '\n';
  std::cout << "Timestamp: " << reading.timestampSeconds << '\n';

  std::cout << "Struct size: " << sizeof(SensorReading) << " bytes\n";

  return 0;
}
