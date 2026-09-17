# WiFi Scanner

WiFi Scanner is a lightweight command-line wireless network scanner for Linux. The project aims to provide a simple tool for discovering and analyzing nearby WiFi networks while exploring Linux networking, wireless interfaces, and IEEE 802.11 fundamentals.

The project is being developed as a learning-focused utility and as a foundation for wireless reconnaissance functionality that can later be integrated into larger wireless security tools.

## Features

### Planned

* **WiFi network discovery**: Discover nearby wireless networks
* **Network information**: Display SSID, BSSID, channel, and signal strength
* **Security detection**: Identify the security type used by discovered networks
* **Wireless interface selection**: Select a specific WiFi interface for scanning
* **Channel information**: Display wireless channels used by nearby networks
* **Signal monitoring**: Monitor signal strength of discovered networks
* **Command-line interface**: Simple terminal-based operation
* **Export support**: Save scan results for further analysis

> Features will be added incrementally as development progresses.

## Technologies Used

* C
* Linux
* IEEE 802.11
* Linux Wireless Networking

## Usage

### Dependencies

* Linux
* GCC
* Make

Additional dependencies may be added as new features are implemented.

### Steps

1. **Clone the repo**

   ```bash
   git clone https://github.com/<username>/wifi-scanner.git
   ```

2. **Build**

   ```bash
   make build
   ```

3. **Run**

   ```bash
   make run
   ```

> Build and usage instructions will be updated as the project develops.

## Development

The project is being developed incrementally, starting with basic wireless network discovery and gradually adding wireless analysis functionality.

Planned development stages:

```text
WiFi Interface
      ↓
Network Discovery
      ↓
Network Information
      ↓
Channel & Signal Analysis
      ↓
Wireless Frame Analysis
      ↓
Export & Reporting
```

## Contributing

Contributions are welcome! To contribute to this project:

1. **Fork the project**
2. **Clone the fork**

   ```bash
   git clone https://github.com/<username>/wifi-scanner.git
   ```
3. **Add Upstream**

   ```bash
   git remote add upstream https://github.com/<username>/wifi-scanner.git
   ```
4. **Create a new branch**

   ```bash
   git checkout -b feature
   ```
5. **Make your changes**
6. **Commit your changes**

   ```bash
   git commit -am "Add new feature"
   ```
7. **Update main**

   ```bash
   git checkout main
   git pull upstream main
   ```
8. **Rebase to main**

   ```bash
   git checkout feature
   git rebase main
   ```
9. **Push to the branch**

   ```bash
   git push origin feature
   ```
10. **Create a new Pull Request**

## LICENSE

[The GPLv3 License (GPLv3)](LICENSE)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see http://www.gnu.org/licenses/.
