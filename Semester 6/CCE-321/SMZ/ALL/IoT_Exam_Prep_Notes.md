# IoT Exam Prep — Consolidated Notes (9 Lecture PDFs)
*For: Fill in the blanks, One-line answers, True/False*

---

## 📘 PDF 1: IoT Introduction

### Definitions
- **IoT** = network of **smart physical objects** embedded with sensors, computation unit, memory unit, power source, and network connectivity that collect/exchange data, analyze it, and respond accordingly.
- **Goal of IoT**: "**Connect the unconnected**" — things not originally meant to be connected to the Internet.
- **Gartner Definition**: "IoT is the network of physical objects that contain embedded technology to communicate and sense or interact with their internal states or the external environment."
- IoT = **Unification of technologies**: Embedded Systems, Low Power & Low Rate Networks, Internet, Cloud Computing, Data Analytics, Bigdata, Edge Intelligence, Network/Data Security, Software Defined Networks.

### History (dates are important — likely FITB/TF)
- **1999** — Term "Internet of Things" coined by **Kevin Ashton** (Procter & Gamble, later MIT Auto-ID Center).
  - Quote: "In 20th century, computers were brains without senses." / "Now in 21st century, computers are sensing things for themselves!"
- **Early 1980s** — Carnegie Mellon University students connected a **Coca-Cola vending machine** to a network (to check stock remotely).
- **1990** — **John Romkey** (developer of first TCP/IP stack for IBM PC in 1983) connected a **toaster** to the internet — first IoT device.
- **1991** — University of **Cambridge** students used a **web camera** to monitor their coffee pot.
- Beginning of 21st century — **LG Electronics** introduced world's first internet-connected **refrigerator**.
- IoT popularity **did not accelerate until 2010/2011**; reached **mass market by 2013–14**.
- **Evolutionary phases of Internet**: 1990 (Connectivity) → Post-1993 (Networked Economy) → Early 2000 (Immersive Experiences) → 2010 onwards (Internet of Things — digitize the world).

### Benefits of IoT (8 total)
1. Real-Time Monitoring
2. Automation of Processes
3. Improved Efficiency/Productivity
4. Predictive Maintenance
5. Improved/New Insights
6. Cost Reduction
7. Optimized Work Environments
8. Adaptability

### Market Data (numbers — good for FITB)
- IoT Analytics (Sept 2024): global IoT connections ~**17.7 billion (2019)** → **41.1 billion forecast (2030)**.
- **Cellular 5G IoT** has highest CAGR (2021–23): **147%**; (2023–30): **62%**.
- Global enterprise IoT spending: **$235B (2022)** → **$690B (2030f)**.
- Global IoT Market Share (Growthenabler report): Smart Cities **26%**, Industrial IoT **24%**, Personal Health **20%**, Healthcare **20%**, Smart Homes **14%**, Connected Cars **7%**, Smart Utilities & Energy **4%**, Wearables **3%**, Retail **<2%**.
- Transforma Insights: 2024 installed base **17.7 billion** → 2034 **40.6 billion**, CAGR **9%**.

### Applications of IoT (know examples per domain)
- Smart Homes: door lock, bulbs, thermostat
- Smart Cities: water distribution, waste management
- Healthcare: heart rate & BP monitor
- Wearables: smart watches, fitness trackers
- Home Appliances: refrigerator, coffee maker, AC, water heater
- Agriculture: smart farming, climate monitoring, crop monitoring
- Cars: automotive, engine management
- Smart Manufacturing: industrial communication, production flow monitoring
- Transportation: traffic management, parking, vehicle location monitoring
- Energy engagement: grid automation, wireless grid communication

### Connected Cars
- **V2V** = Vehicle to Vehicle, **V2I** = Vehicle to Infrastructure
- Communication tech: **DSRC**, **4G/LTE**
- **RSU** = Road Side Unit; connects to **VANET Control Centre** and **The Cloud**

### Livestock Management
- Uses **ear tags as mesh nodes**, connects via **LoRaWAN Gateway** (office + remote)

### Main Challenges in IoT Implementation (6 categories — important for T/F & FITB)
1. **Scale** — millions of devices connected
2. **Security** — things becoming connected makes security complex
3. **Privacy** — which personal data to share, with whom, how to control
4. **Low Power Network** — devices must stay connected for years, high latency, can't use traditional protocols
5. **Interoperability** — various protocols/architectures, no standardized platform
6. **Sensors** — limited resources, limited sensor types
7. **Bigdata & Data Analytics** — massive, varied, unstructured data

### Sources/Books referenced
1. David Hanes et al., *IoT Fundamentals: Networking Technologies, Protocols, and Use Cases for the Internet of Things*, 1st Ed, 2018, Pearson.
2. Mayur Ramgir, *Internet of Things: Architecture, Implementation and Security*, 1st Ed, 2020, Pearson.

---

## 📗 PDF 2: How IoT Works?

### Smart Home IoT Application — Local Sensors
- IAQ (Indoor Air Quality), Smoke Sensor, Temp & RH, Door Sensor, Water Sensor, Power Sensor
- Local protocols: **Zigbee, Bluetooth, WiFi, WirelessHART**
- IoT Gateway connects to Internet via **WiFi/Ethernet, 4G/5G**
- IoT Network (beyond gateway) uses: **LoRa, 6TiSCH**, connects to Smart Meter via **HaLow, 4G, 5G**

### Traditional Data Flow in IoT (5-stage pipeline — MEMORIZE ORDER)
**Things/Edge things → Local connectivity → Edge gateways → Backhaul Core Network → Cloud/Internet → Users/Administrators**

- **Local connectivity** protocols: EnOcean, Bluetooth, WiFi, WirelessHART, Zigbee, ISA100 Wireless
- **Edge gateways**: routers connecting to things & to backhaul
- **Backhaul Core Network**: mesh-like carrier network
- **Cloud**: data center at the top
- **IoT Network** = Things + Local connectivity + Edge gateways (all combined, as boxed in diagram)

### Data Processing Locations (3 layers — important concept)
1. **Things Layer** — Restricted storage, extremely low latency (sensors: hospital alarm, light, body monitor, motion, GPS, humidity, mobile)
2. **Edge Layer(s)** — Limited storage, high latency, limited compute capacity; real-time data collection, processing, caching, agenting, load-balancing (Edge Node types: Local Compute, Storage, Data Cache, Agent)
3. **Cloud Layer** — Abundant storage, high latency (from things' perspective), high availability, high compute capacity; massive data processing & machine learning

### Edge Computing & Edge Intelligence
- **Edge Computing**: hosts computation tasks **close to data sources and end users**.
- **AI**: extracts insights leading to better decisions & strategic moves.
- **Edge Intelligence**: applying AI on data **at the network edge**.

### What is Needed to Know (4 things before building IoT app) — Likely T/F or FITB
1. **IoT Components** — required components for designing an IoT application
2. **IoT Architecture** — physical arrangement of sensors, actuators, gateway, edge devices, Internet connectivity
3. **IoT Network Access Technology** — connectivity tech linking sensors/actuators to each other & gateway/Internet
4. **IoT Data Processing/Analysis** — where & how sensed data is stored/analyzed

### DIY Examples
- **Long-range Monitoring & Control**: sensor nodes → **LoRa** → **LoRa Gateway** → WiFi/Ethernet/3G/4G → **Cloud Server** → Computer/Mobile/Laptop
- **Smart Home Monitoring**: Vibration/Pulse/Light/DHT11 sensors — all using **ESP8266** modules → WiFi → Local Server → WiFi Modem → Enterprise LAN/IITG LAN → **ThingSpeak Cloud** → mobile (3G/4G)

---

## 📙 PDF 3: IoT Ecosystem

### IoT Ecosystem — Definition
"Encompasses **all the components** needed to collect, process, and analyze data from IoT devices, enabling smart applications and services."

### 7 Components of IoT Ecosystem (IMPORTANT — likely a full question)
1. **IoT Core** — Sensors & Actuators, microcontrollers, internet connectivity, service platform (incl. security)
2. **IoT Gateway** — ensures bidirectional communication between IoT networks and other networks
3. **Cloud** — accepts, accumulates, maintains, stores, processes data
4. **Analytics** — conversion/analysis of data → recommendations & decision making
5. **User Interface/Visualization** — sleek, appealing, interactive, easy-to-use GUI
6. **IoT Architectures** — graphical structure of solutions (e.g., 3-layer architecture, IoT-WF, oneM2M)
7. **IoT Frameworks** — tools to design/implement IoT solutions: **Microsoft Azure IoT, Cisco Ultra IoT, Amazon AWS IoT, IBM Watson IoT**, etc.

### IoT Network Architecture
- **Very common 4-Layer Architecture**: 
  **Sensing Layer** (Sensors) → **Network Layer** (Gateways) → **Data Processing Layer** (Processing Unit) → **Application Layer** (Application)
- Source: Sikder et al., IEEE Communications Surveys & Tutorials, 23(2), 2021.

### Core Components of IoT (4-part "IoT Core", pie diagram)
1. **Sensors & Actuators**
2. **Internet Connectivity**
3. **Microcontrollers** — automatically controls sensors/actuators, makes them "smart"
4. **Service Platform** — deploy/manage IoT devices & apps incl. data management, analytics, security

### Sensors (examples — good for FITB matching)
- MQ135 — Air Quality Gas Sensor
- Sound Detection Sensor
- DHT11 — Temperature & Humidity Sensor
- PIR — Motion Detector Sensor
- Pulse Sensor
- LDR — Light Sensor
- Ultrasonic Distance Sensor
- IR Sensor

### Actuators (examples)
- 4-Channel 5V Relay, Servo Motor, DC Motor, Solenoid Valve, Linear Actuators, LED, LCD Display

### Access Technologies in IoT
- **Communication Criteria**: Range, Frequency Bands, Power Consumption, Topology, Constrained Devices, Constrained-Node Networks
- **Technologies**: LoRaWAN, ZigBee, Sub-1GHz, 6LoWPAN, Bluetooth, Sigfox, NB-IoT, NFC, Z-Wave, WiFi, Thread, nWave, 5G

### Use of Internet Infrastructure (numbers — high FITB likelihood)
- **IPv6** packets require minimum MTU/PDU size of **1280 bytes**
- Max MAC layer frame size in **IEEE 802.15.4** = **127 bytes**
- → Gives only **102 bytes** for an IPv6 packet!
- Need for optimization due to: **Constrained Nodes** & **Constrained Networks**
- Key Advantages of IP: Open/standard-based, Versatile, Ubiquitous, Scalable, Manageable, Highly secure, Stable & resilient
- IP Stack: Transport (TCP/UDP) → Network (IPv6/IPv4) → **Adaptation Layer** → Data Link (IEEE 802.15.4g/802.15.4e) → Physical (Wired/Wireless)

### Modification in Stack (Key Terms — TRUE/FALSE gold mine)
- **WPAN** = Wireless Personal Area Networks
- **IEEE 802.15.4** = Low-Rate WPAN
- **6LoWPAN** = IPv6 over Low-Power WPAN
- **TSCH** = Time Synchronized Channel Hopping
- **6TiSCH** = IPv6 over the TSCH mode of IEEE 802.15.4e
- **6top** = 6TiSCH Operation Sublayer
- IEEE 802.15.4e is a **2011 Amendment (Amendment 6)**
- In 6TiSCH network stack: IPv6 → 6LoWPAN HC → 6top → IEEE 802.15.4e TSCH

### Application Layer Protocols
- **Data Format**: Binary, JSON, CBOR
- **Application Layer protocols**: **CoAP, MQTT, XMPP, AMQP**
- **Transport Layer**: UDP, DTLS
- **Internet Layer**: IPv6/IP Routing, 6LoWPAN
- **Network/Link Layer**: IEEE 802.15.4 MAC, IEEE 802.15.4 PHY/Physical Radio

### IoT Gateway
- **Definition**: physical device or software program serving as connection point between two different types of networks.
- Functions:
  1. Provides **bidirectional communication** between IoT protocols & other networks (e.g., Zigbee ↔ Ethernet)
  2. Sometimes executes processing operations → **Edge computing**
  3. Maintains **security** — can shield entire IoT system from cyberattack
- Source: B. Kang, D. Kim, H. Choo, IEEE Trans. Multi-scale Computing Systems, 2017.

### Use of Cloud in IoT
- IoT generates vast **Big Data** → strain on Internet infrastructure
- Cloud facilitates: provide services, store huge data, process data efficiently
- **Benefits of Cloud Platform in IoT**: Network Scalability, Data Mobility, Time to market, Security, Cost-effectiveness

### AI for IoT
- AI = putting human intelligence in machines; ability to think/learn by itself
- Use cases:
  - Smart Home → Automated HVAC control
  - Industrial IoT → Predictive maintenance, optimized supply chain
  - Farming → Smart farming, interruption warning
  - Self-driving Car → Mimic human driving
  - Health → Auto-diagnosing disease, assistive healthcare

### Data Analytics in IoT
- Key formula: **"Data Analytics + IoT => Smart Business Solutions"**
- **IoT analytics** = application of data analysis tools/procedures to realize value from huge volumes of IoT-generated data
- **Challenges**: Huge Volume, Real-time data flow, Variety of data types (XML, video, SMS), Unstructured data, Variable data model/meaning/value

### Securing IoT (real incidents — good T/F material)
- "Both IoT manufacturers and customers didn't care about security!"
- **Oct 26, 2016**: Major cyber attack disrupted internet across Europe & US (Dyn/**Mirai botnet** DDoS) — *unauthorized access to IoT devices*
- **Nov 7, 2016**: DDoS attack halted heating in **Finland** amidst winter — *unauthorized access to IoT network*

### User Interface — Important Characteristics
Sleek design, Visually appealing, Interactive UI, Ease-of-use, Handy

### IoT Frameworks (Table — memorize a few)
| Framework | Framework |
|---|---|
| RTI Connext DDS | Cisco Ultra IoT |
| Salesforce IoT Cloud | Microsoft Azure IoT |
| Eclipse IoT | PTC ThingWorx |
| GE Predix | Amazon AWS IoT |
| IBM Watson IoT | Kaa |

---

## 🎯 Quick-Fire Facts for FITB/True-False

| Fact | Answer |
|---|---|
| Term "Internet of Things" coined by | Kevin Ashton, 1999 |
| First internet-connected device (early example) | Coca-Cola vending machine (CMU, early 1980s) |
| First device connected to internet by name, 1990 | Toaster (John Romkey) |
| 1991 Cambridge students monitored | Coffee pot (via webcam) |
| First internet-connected refrigerator | LG Electronics |
| IPv6 minimum MTU | 1280 bytes |
| IEEE 802.15.4 max MAC frame size | 127 bytes |
| Bytes left for IPv6 packet in 802.15.4 frame | 102 bytes |
| 6LoWPAN full form | IPv6 over Low-Power WPAN |
| 6TiSCH full form | IPv6 over TSCH mode of IEEE 802.15.4e |
| Application layer protocols in IoT stack | CoAP, MQTT, XMPP, AMQP |
| Common IoT architecture layers | Sensing, Network, Data Processing, Application (4-layer) |
| Mirai botnet attack date | Oct 26, 2016 |
| Finland heating DDoS attack date | Nov 7, 2016 |
| "Connect the unconnected" is the goal of | IoT |
| Gartner defines IoT as | network of physical objects with embedded tech to communicate/sense/interact |
| Edge Intelligence = | AI applied at network edge |
| IoT market did not accelerate until | 2010/2011; mass market 2013-14 |

---

## Lessons Learned Summary (as stated in slides — could be asked directly)

**PDF1**: What is IoT, genesis/history of IoT, benefits, market share, real-world applications, implementation challenges.

**PDF2**: Layered view of an IoT application, traditional data flow in IoT, data processing locations in IoT, what's needed before developing IoT applications.

**PDF3**: What is IoT Ecosystem; components — IoT Architecture, IoT Core (Sensors/Actuators, Access Technologies, Internet use), IoT Gateway, Cloud, AI, Data Analytics, Security, User Interface, IoT Framework.

---
---

## 📕 PDF 4: IoT Architecture

### What is Architectural Plan?
- **Architecture** = how you design your application or solution (graphical structure).
- **Essence of IoT architecture** — defines how data is: **transported, collected, analyzed, and ultimately acted upon**.
- **Driving forces of IoT architecture** (6 — good FITB list):
  1. Scale
  2. Security
  3. Constrained devices
  4. Massive data
  5. Data analysis
  6. Support to legacy devices

### Basic 3-Layer Architecture (MEMORIZE — very likely exam Q)
1. **Perception Layer** — physical layer; has **sensors** for sensing/gathering environment info
2. **Network Layer** — connects to other smart things, network devices, servers; transmits & processes sensor data
3. **Application Layer** — delivers application-specific services to user (e.g., smart homes, smart cities, smart health)

### Commonly Used 4-Layer Architecture (Sikder et al., IEEE Comm. Surveys & Tutorials, 23(2), 2021)
1. **Sensing Layer** — sensors & actuators placed in environment to gather information
2. **Network Layer** — protocols/technologies enabling devices to connect/communicate with each other & wider internet
3. **Data Processing Layer** — data management systems, analytics platforms, ML algorithms → extract insights, make decisions
4. **Application Layer** — mobile apps, web portals, other UIs interacting with underlying IoT infrastructure

> Note: Same 4-layer diagram (Sensing→Network→Data Processing→Application) appears in both PDF3 and PDF4 — same source (Sikder et al. 2021).

### Emergence of Standard IoT Architecture
- Basic 3-layer / 4-layer architectures **did not address many issues**.
- IoT **does not have any single standard architecture** strictly followed universally.
- **Existing Issues** (4 — T/F gold):
  1. Highly fragmented market with limited vendor-specific applications
  2. Each application vertical has own technologies without interoperability
  3. Incompatibility for seamless integration between heterogeneous applications/devices
  4. Did **not** consider security aspect in design
- **Two best-known standard architectures**:
  1. **oneM2M architecture**
  2. **IoT World Forum (IoTWF) architecture**

### oneM2M Architecture (IMPORTANT — many facts)
- Proposed by **European Telecommunications Standards Institute (ETSI)**
- Divides IoT functions into **three major domains**:
  1. **Applications Layer** — e.g., Smart Energy, Asset Tracking, Fleet Management (Automotive/Home/Energy Application)
  2. **Services Layer** — common services horizontal framework supporting **RESTful APIs**; includes Common Service Layer, Communication Technologies & Protocols, Communication Networks, Communication Devices & Hardware
  3. **Network Layer** — IoT devices & communication network (e.g., **802.15.4, LoRa, WiFi**); applications talk to APIs to communicate to sensors
- **Goal of oneM2M**: create a **common services layer** that can be embedded in field devices to allow communication with application servers.
- **Challenges addressed**: heterogeneity of devices, heterogeneity of software, heterogeneity of access methods.
- **API** = Application Programming Interface — a "contract of service" between two applications defining how they communicate via requests/responses.
- **Northbound interface** = allows a component of a network to communicate with a **higher-level** component.
- **RESTful API** uses **HTTP requests**: **GET, PUT, POST, DELETE** data.
- Example use case: smart building security app detects nobody present → triggers lights off & HVAC to reduced setting.
- Common Services Layer = **horizontal framework** across vertical industry applications.

### IoTWF Architecture — 7-Layer Stack (VERY IMPORTANT — memorize layer order & numbers)
- IoTWF committee **led by Cisco, IBM, Rockwell Automation**, and others.
- Aims to: offer clean/simplified IoT perspective; include edge computing, data storage, data access; concise technical visualization.
- Benefits: decompose IoT problem into smaller parts; identify technologies per layer; different vendors can provide different parts; **tiered security model** enforced at transition points between levels; define interfaces → interoperability.

**The 7 Layers (bottom to top — numbered 1 to 7):**
| Layer # | Name | Key Function |
|---|---|---|
| **1** | Physical Devices & Controllers | Home of the "things"; from microscopic sensors to giant factory machines; primary function = **generating data**; queryable/controllable over network |
| **2** | Connectivity | Communication & processing units; comms between Layer 1 devices, reliable delivery, switching & routing, protocol translation, network-level security |
| **3** | Edge Computing (a.k.a. **"Fog" layer**) | Data element analysis & transformation; data reduction (filter/clean), reformat/compress data, initial processing (alert generation, data validation) |
| **4** | Data Accumulation | Storage; captures & stores data for apps; converts **event-based → query-based** processing |
| **5** | Data Abstraction | Aggregation & access; reconciles multiple data formats; ensures consistent semantics; confirms dataset completeness |
| **6** | Application | Reporting, Analytics, Control; interprets data via software; monitors/controls/reports based on analysis |
| **7** | Collaboration & Processes | Involves people & business processes; consumes/shares application info; collaborating & communicating IoT information |

- **Basic principle of Edge/Fog layer**: information processing initiated **as early and as close to the edge of the network as possible**.
- **Fog layer = another name for Edge Computing layer (Layer 3)** — good True/False question.

### Unified IoT Architecture
- Highlights fundamental building blocks common to most IoT systems; helps design an IoT network.
- Presented as **two parallel stacks**:
  1. **Core IoT Functional Stack**: Things (Sensors & Actuators) → Communications Network → Applications (plus Vertical Specific Apps & Analytics on top)
  2. **IoT Data Management and Compute Stack**: **Edge → Fog → Cloud**
- **Security** spans vertically across both stacks (shown as bidirectional arrow).
- Core stack also references: IoT Network Mgmt (CoAP, MQTT), Network Transport Layer, Gateways and Backhaul Network, Access Network (FAN, LoRa, PLC).

### Lessons Learned (PDF4, as stated)
- Need of IoT architecture; 3-Layer & 4-Layer IoT Architectures; oneM2M architecture; IoT WF architecture; Unified IoT Architecture.

---
---

## 📔 PDF 5: The "Things" in IoT

### The "Things" — Core Concept
- **Sensors & Actuators** are the **fundamental building blocks of IoT**.
  - **Sensor senses**; **Actuator acts**.
- **Smart Objects** = physical objects containing:
  - **Embedded technology**: microcontroller unit, memory storage, power supply, communication ports, input/output, timer/counter
  - Sensors and/or actuators
  - Ability to sense/interact with environment meaningfully, be interconnected, and communicate with each other or external agents.

### Sensors — Definition & Classification
- **Sensor**: measures a physical quantity and converts the measurement into **analog/digital form**.
- **6 classification bases (IMPORTANT — likely matching/FITB)**:
  1. **External energy requirement** → Active / Passive
  2. **Placement location** → Invasive / Non-invasive
  3. **Distance from sensing object** → Contact / No-contact
  4. **Sensing mechanism** → Thermoelectric / Electromechanical / Piezoresistive / Optic / Electric / Fluid mechanics / Photoelastic
  5. **Sensing parameter** → Position / Occupancy / Motion / Velocity / Force / Pressure / Flow / Humidity / Light / Temperature / Acoustic / Radiation / Chemical / Biosensors
  6. **Application industry** → Medical / Manufacturing / Agriculture
  7. **Measuring scale** → Absolute / Relative

### Sensor Types by Sensing Parameter (Table — HIGH exam value, memorize type→example pairs)
| Sensor Type | What it Detects | Example(s) |
|---|---|---|
| Position | Position of object (absolute/relative; linear, angular, multi-axis) | Proximity sensor, Potentiometer, Inclinometer |
| Occupancy | Presence of people/animals in surveillance area (even if stationary) | Radar Sensor |
| Motion | Movement of people/objects | PIR (Passive Infrared) Sensor, Microwave Radar Sensor, Ultrasonic/Infrared Proximity Sensor |
| Velocity & Acceleration | Speed / change in velocity | Gyroscope, Accelerometer |
| Force | Whether force applied & magnitude | Tactile sensor, Viscometer |
| Pressure | Force per unit area by liquids/gases | Barometer, Piezometer |
| Flow | Rate of fluid flow over time | Water meter, Anemometer |
| Humidity | Water vapor amount in air (absolute/relative) | Hygrometer, Soil moisture sensor |
| Light | Presence of light | LDR light sensor, Photodetector, Flame Sensor |
| Radiation | Radiation in environment | Neutron detector, Geiger-Muller counter |
| Temperature | Heat/cold in system (contact/non-contact) | Thermometer, Temperature gauge, Calorimeter |
| Acoustic | Sound level | Microphone, Hydrophone |
| Chemical | Concentration of a chemical (e.g. CO₂) | Smoke detector, Breathalyzer |
| Biosensor | Biological elements (organisms, tissues, cells, enzymes, antibodies, nucleic acid) | Pulse oximeter, Electrocardiograph (ECG), Blood glucose biosensor |

### Sensors in a Smart Car (11 types — good FITB matching)
GPS, A/C sensor, Rear camera, Video cameras, Fuel sensor, Microphone, Ultrasonic sensor, RADAR sensor, Infrared sensor, Pressure sensor, Inertial sensor, Exhaust gas sensor (CO₂)

### Sensors in a Smartphone (12 types)
Near Field Communication (NFC), Camera, Proximity Sensor, Pedometer, Magnetometer, GPS, Accelerometer, Light Sensor, Humidity Sensor, Touchscreen, Gyroscope, Thermometer, Digital Barometric Pressure Sensor, Moisture Sensor, Fingerprint Sensor, Microphone

### Actuators — Definition & Classification
- **Actuator**: receives a control signal (electrical signal/digital command) that **triggers a physical effect** — usually motion, force, etc.
- Sense-Measure-Act cycle: Sensors **Sense→Measure** (Real World → Digital Representation); Actuators **Act→ Useful Work** (Digital Representation → Real World)
- **5 classification bases (IMPORTANT)**:
  1. **Type of motion produced** — linear, rotary, one/two/three axes
  2. **Power output** — high/low/micro power
  3. **Binary / Continuous output** — based on number of stable-state outputs
  4. **Area of application** — specific industry/vertical
  5. **Type of energy** — mechanical, electrical, hydraulic, etc.

### Actuators by Energy Type (Table — memorize)
| Type | Examples |
|---|---|
| Mechanical actuators | Lever, Screw jack, Hand crank |
| Electrical actuators | Thyristor, Bipolar transistor, Diode |
| Electromechanical actuators | AC motor, DC motor, Step motor |
| Electromagnetic actuators | Electromagnet, Linear solenoid |
| Hydraulic and Pneumatic actuators | Hydraulic cylinder, Pneumatic cylinder, Piston, Pressure control valve, Air motor |
| Smart material actuator (thermal & magnetic) | Magnetorestrictive material, Bimetallic strip, Piezoelectric bimorph |

### IoT-based Automated Systems (examples)
- **Smart Parking System** — CCTV, GPRS/3G/4G/WiFi, RFID, Parking Sensor, Electronic tag, Geomagnetism detection
- **Smart Irrigation System** — mobile app controlled sprinkler/station system

### Smart Objects — 5 Characteristics (IMPORTANT — likely full listing question)
1. **Sensor(s) and/or Actuator(s)**
2. **Processing unit** — acquires sensed data, processes/analyzes it, coordinates control signals to actuators, controls other functions (comm unit, power unit)
3. **Memory** — mostly on-chip flash; **user memory** (application data) + **program memory** (device programming)
4. **Communication unit** — connects smart object to other smart objects & outside world (wireless/wired via network)
5. **Power source** — powers all components

- Example device: **TelosB Mote**

### Constrained Nature of Smart Objects (Cisco source — T/F gold)
- **Low memory** — few tens of KB; embedded OS (**TinyOS, Contiki**, etc.)
- **Moderate CPU power** — to minimize energy use
- **Lossy Communications** — low power wireless mesh, predominantly **IEEE 802.15.4**; also IEEE P1902.1 (Power Line Comms)
- **Narrowband Media** — max **250 KB/s**, lower rates the norm
- **Power Consumption is critical** — energy efficiency paramount; battery-powered devices must last years

### Present Trends in Smart Objects (5 trends — likely T/F)
1. **Size is decreasing**
2. **Power consumption is decreasing**
3. **Processing power is increasing**
4. **Communication capabilities are improving**
5. **Communication is being increasingly standardized**

### Lessons Learned (PDF5, as stated)
- What is "Things" in IoT; Classification method of Sensors; Different Sensors based on Sensing parameter; Classification method of Actuators; Different Actuators based on Energy type; What is "Smart object" in IoT.

---

## 🎯 Quick-Fire Facts — PDF4 & PDF5 Addendum

| Fact | Answer |
|---|---|
| oneM2M proposed by | ETSI (European Telecommunications Standards Institute) |
| oneM2M divides IoT functions into how many domains | 3 (Applications, Services, Network) |
| RESTful API HTTP methods | GET, PUT, POST, DELETE |
| IoTWF architecture led by | Cisco, IBM, Rockwell Automation |
| Total layers in IoTWF architecture | 7 |
| Layer 1 of IoTWF | Physical Devices & Controllers |
| Layer 3 of IoTWF, also called | Edge Computing / "Fog" layer |
| Layer 4 of IoTWF | Data Accumulation (Storage) |
| Layer 7 of IoTWF | Collaboration & Processes |
| Unified IoT architecture's two parallel stacks | Core IoT Functional Stack & IoT Data Management/Compute Stack |
| Data Management stack 3 sub-layers | Edge, Fog, Cloud |
| Fundamental building blocks of IoT | Sensors & Actuators |
| Sensor function | Senses |
| Actuator function | Acts |
| Sensor for detecting motion | PIR (Passive Infrared) Sensor |
| Sensor for occupancy | Radar Sensor |
| Number of characteristics of Smart Object | 5 |
| Example embedded OS in constrained smart objects | TinyOS, Contiki |
| Max narrowband media data rate (Cisco slide) | 250 KB/s |
| Common low-power wireless mesh standard | IEEE 802.15.4 |
| Example smart object hardware (image in slide) | TelosB Mote |
| Actuator example using electromagnetic energy | Electromagnet, Linear solenoid |

---

## Sources/Books referenced (PDF4 & PDF5)
- David Hanes et al., *IoT Fundamentals: Networking Technologies, Protocols, and Use Cases for the Internet of Things*, 1st Ed, 2018, Pearson India.
- Sikder et al., "A Survey on Sensor-based Threats to Internet-of-Things (IoT) Devices and Applications", IEEE Communications Surveys & Tutorials, 23(2), pp. 1125-1159, 2021.

---
---

## 📓 PDF 6: IoT Network Access Technologies

### Communications Criteria (6 basic criteria — MEMORIZE LIST)
1. **Range**
2. **Frequency bands**
3. **Power consumption**
4. **Topology**
5. **Constrained devices**
6. **Constrained-node networks**

- IoT access tech can be **wired or wireless**; wireless is prevalent because: ease of deployment, allows mobility, moving without losing connectivity.

### Communication Range (3 categories — table-worthy)
| Range | Distance | Wireless examples | Wired examples |
|---|---|---|---|
| **Short range** | tens of meters (alt. to serial cable) | IEEE 802.15.1 Bluetooth, IEEE 802.15.7 VLC | — |
| **Medium range** | tens to hundreds of meters | IEEE 802.11 WiFi, IEEE 802.15.4 Low Rate WPAN, IEEE 802.15.4g SUN | IEEE 802.3 Ethernet, IEEE 1901.2 Narrowband PLC |
| **Long range** | > 1 mile (1.6 km) | 2G/3G/4G, IEEE 802.11ah, LPWA | IEEE 802.3 Ethernet over optical fiber, IEEE 1901.2 Broadband PLC |

### Frequency Bands
- Regulated by: **ITU** (International Telecommunication Union), **FCC** (US), **TRAI** (India)
- **Licensed spectrum**: for long-range tech, users must subscribe. Common: **Cellular (900–2100 MHz)**, **NB-IoT (700–900 MHz)**
- **Unlicensed spectrum**: no interference protection guaranteed; uses **ISM bands** (Industrial, Scientific, Medical)
  - Well-known ISM bands: **2.4 GHz, 5 GHz, 915 MHz** for WiFi/BLE/ZigBee; **868 MHz** for LoRa
  - **India** additionally allows **865–867 MHz** ISM band
- **900MHz vs 2.4GHz vs 5GHz**: 900MHz = more robust, less interference, low bandwidth; 2.4GHz = higher bandwidth but congested (WiFi/Bluetooth/microwaves); 5GHz = higher bandwidth, less congested, but high attenuation/low power limits

### Power Consumption
- **Grid-powered node**: direct connection to grid; unlimited comms but deployment/mobility limited by power source availability
- **Battery-powered node**: flexible, small batteries, changeable/rechargeable
- IoT nodes are mostly battery-powered → wireless tech must address low power consumption & connectivity

**Power Consumption Table (memorize a few numbers — high exam value)**
| | Bluetooth | ZigBee | WiFi | LoRaWAN | NB-IoT |
|---|---|---|---|---|---|
| Standard | IEEE 802.15.1 | IEEE 802.15.4 | IEEE 802.11b | LoRaWAN | 3GPP NB-IoT |
| Sleeping | 9 µA | 12 µA | 30 µA | **0.1 µA** | 3 µA |
| Awake/Idle | 35 mA | 50 mA | 245 mA | 1.4 mA | 6 mA |
| Transmitting | 39 mA | 52 mA | 251 mA | 44 mA | 220 mA |
| Power Supply | 3.3V | 3.3V | 5V* | 3.3V | 3.6V |

- *ESP8266 module (3.3V) can be used as WiFi module.
- **LoRaWAN has lowest sleep current (0.1 µA)**; **WiFi has highest power consumption overall**.

### Topology
- **3 dominant topology schemes**: **Star, Mesh, Peer-to-peer (cluster tree)**
- Long-range & short-range tech → **star** topology prevalent
- Medium-range tech → star, peer-to-peer, or mesh common
- **IEEE 802.15.4, 802.15.4g, wired IEEE 1901.2a PLC** → generally deployed as **mesh**
- **Indoor WiFi** deployments → mostly **star**
- **FFD** (Full Function Device) = implements full network functions
- **RFD** (Reduced Function Device) = implements subset of protocol functions, communicates only with coordinator

### Constrained Devices (RFC 7228 — 3 classes, MEMORIZE TABLE)
| Class | RAM | Flash Storage | IP stack | Security | Example |
|---|---|---|---|---|---|
| **Class 0** | < 10 KB | < 100 KB | Not present | No | Push button |
| **Class 1** | > 10 KB | > 100 KB | Optimized IP stack | Light | Sensors |
| **Class 2** | > 50 KB | > 250 KB | Full IP stack | Yes | Smart meter |

### Constrained Networks
- Also called **Low-power and Lossy Networks (LLNs)**
- Layer 1 & 2 protocols evaluated on: **data rate/throughput, latency/determinism, overhead/payload**
- Data rates: **100 bps to tens of Mbps**; actual throughput often much less
- For latency concerns → **TSCH (Time-Slotted Channel Hopping)** mode of IEEE 802.15.4e
- **Minimum IPv6 MTU = 1280 bytes**; **IEEE 802.15.4 MTU = 127 bytes**; **LoRaWAN payload = 19 to 250 bytes**
- → IPv6 payload fragmentation must be done at the **link layer**

### Comparison of Access Technologies (table — very likely exam matching Q)
| | WiFi | BLE | Thread | Sub-GHz (TI) | SigFox | ZigBee | LoRa |
|---|---|---|---|---|---|---|---|
| Max throughput | **72 Mbps** | 2 Mbps | 250 Kbps | 200 Kbps | **100 bps** | 250 Kbps | 50 Kbps |
| Range | 100 m | 750 m | 100 m | 4 km | **25 km** | 130 m | 10 km |
| Topology | Star | P2P/Mesh | Mesh/Star | Star | Star | Mesh/Star | Star of Star |
| Frequency | 2.4 GHz | 2.4 GHz | 2.4 GHz | Sub-GHz | Sub-GHz | 2.4 GHz | Sub-1GHz |
| IP at device node | Yes | No | Yes | No | No | No | No |
| Deployed consumer device | AP | smartphones | No | No | No | No | No |

- SigFox has lowest throughput but longest range (25 km) among these.
- WiFi has highest throughput but shortest range in this table.

### Lessons Learned (PDF6, as stated)
- Different attributes of access technologies (Communication Criteria, Range, Frequency Band, Power consumption, Topology); Classifications of Constrained Nodes; Characteristics of Constrained Networks.

---
---

## 📒 PDF 7: Security in IoT

### Introduction
- IoT uses **low-power low-rate wireless communication protocol stack**; millions of sensing/actuating devices attached.
- **IoT security** = act of securing IoT devices and networks they're connected to.
- TCP/IP security solutions are **ill-suited for IoT** because of **constrained IoT nodes and networks**.

### Security Requirements
**Fundamental Requirements (CIAAN — mnemonic-worthy):**
1. **Confidentiality** — protect info from unauthorized access
2. **Integrity** — data must not change in transit
3. **Availability** — guarantee of reliable access by authorized people
4. **Authentication** — ensures individual is who they claim to be
5. **Non-repudiation** — assurance someone cannot deny validity of something
6. **Resilience** — ability to prepare for, respond to, recover from attack

**Additional requirements**: Privacy, Anonymity, Accountability, Trust

### Common Security Attacks (7 types — MEMORIZE definitions, T/F gold)
1. **Snooping** — unauthorized access/interception of data
2. **Traffic Analysis** — obtain info by monitoring online traffic (without reading content)
3. **Modification** — modifies info to benefit attacker
4. **Masquerading/Spoofing** — attacker impersonates somebody else
5. **Replaying** — attacker replays a previously snooped message
6. **Repudiation** — sender/receiver later denies sending/receiving a message
7. **Denial of Service (DoS)** — attacker slows/disables service of legitimate system

### Cryptography
- History dates back to **Julius Caesar (100 BC)**.
- Cryptographic techniques disguise data so intruders gain no information.
- **Two categories**:
  - **Symmetric Key Cryptography** — same secret key for encryption & decryption. Algorithms: **DES, Triple DES, AES**
  - **Asymmetric Key Cryptography** — two distinct keys (Public + Private); public known to both, private known only to one party. Algorithms: **RSA, Diffie-Hellman Key Exchange (DHK), Elliptic Curve Cryptography (ECC)**
- **Confidentiality** is the primary objective of both symmetric & asymmetric cryptography.

### Message Integrity & Hash Function
- **Message Integrity**: ensures message remains unchanged (like a fingerprint for documents).
- **Message Digest**: electronic equivalent of fingerprint; generated by a **hash function**.
- **Cryptographic Hash Function properties**:
  - Takes input *m*, computes fixed-size string **H(m)** = hash
  - **Computationally infeasible** to find two different messages x, y such that H(x) = H(y)
- Popular hash functions: **MD5, SHA-1**

### Message Authentication
- A digest checks integrity, but **authentication** needs a **shared secret** = **authentication key**.
- **MAC (Message Authentication Code)** = digest of message + authentication key.
- MAC does **NOT require an encryption algorithm** (important T/F point!).
- Note: **MAC** can mean Message Authentication Code / Message Integrity Code (MIC) — NOT to be confused with **MAC Layer** = Medium Access Control Layer.

### Digital Signature
- A type of electronic signature based on **Asymmetric Key cryptography**.
- Purpose: validate authenticity & integrity of digital documents/messages/software.

### Public Key Infrastructure (PKI)
- Makes public key **trustable** using a trusted **Certification Authority (CA)** and **Public Key Certificates**.
- Solves the problem of verifying you have the actual public key of the entity you want to communicate with.

### End-Point Authentication (4 solutions, increasing security — sequence matters)
1. **Solution #1**: send ID/name only → **Not Secured**
2. **Solution #2**: user ID + password → **Not Secured** (password can be sniffed)
3. **Solution #3**: encrypt ID+password with shared secret key K → **Not Secured** (replay attack possible)
4. **Solution #4**: use **nonce** along with password encryption → Secured

### IoT PHY Layer (IEEE 802.15.4)
- Manages: physical RF transceiver, channel selection, energy management, signal management
- Supports **multiple channels** (e.g. **16 channels** in 2.4 GHz ISM band)
- Modulation techniques for reliability: **DSSS** (Direct Sequence Spread Spectrum), **UWB** (Direct Sequence Ultra-Wideband), **CSS** (Chirp Spread Spectrum)
- **PHY data frames**: at most **128 bytes** — Structure: `<SYNC Header 5 byte><PHY Header 1 byte><PHY Payload 127 byte>`

### IoT MAC Layer (IEEE 802.15.4)
- Manages: channel access, network beaconing, frame validation, **GTS (Guaranteed Time Slots)**, node association, link-level security, data services
- **Device types**: FFD, RFD
- **Frame types**: Data, ACK, Beacon, Command (Association request/response, Disassociation notification, Data request, Beacon request, GTS request)
- Supports topologies: peer-to-peer, star, cluster
- Device identifiers: **16-bit short identifier** (restricted environments) or **64-bit EUI-64**
- Collisions managed by **CSMA/CA**
- **IEEE 802.15.4e** devices synchronize to a **slotframe structure** (group of slots repeating over time)
- Time sync methods: **acknowledgment-based** or **frame-based**

### Security in IoT PHY & MAC — Security Suites (IMPORTANT TABLE)
- **AES** = Advanced Encryption Standard; **MAC** = Message Authentication Code; **CBC** = Cypher Block Chaining; **CTR** = Counter Mode; **CCM** = CTR + CBC

| Security Suite | Achieved Requirement |
|---|---|
| Null | No security |
| **AES-CTR** | **Confidentiality** only |
| **AES-CBC-MAC** (32/64/128) | **Data Authenticity, Integrity** only |
| **AES-CCM** (32/64/128) | **Confidentiality + Data Authenticity + Integrity** (all three) |

- AES-CCM-X = CCM combines CTR (confidentiality) + CBC-MAC (integrity/authenticity) → strongest suite.

### Data Frame with Security Header
- **Security Enabled Bit** in Frame Control field must be set to use security.
- **Auxiliary Security Header** fields: Security Control (Security Level, Key Identifier Mode), **Frame Counter** (ensures sequential freshness/replay protection), Key Identifier (Key Source + Key Index subfields)
- Standard uses **128-bit keys**.

### Protection Against Replay Attack
- Achieved via **Frame Counter** + **Key Control** fields (common across all security modes).
- Frame Counter = unique message ID by sender; Key Counter increments when Frame Counter maxes out.
- **Initialization Vector (IV)**: pseudorandom number OR [Frame Counter(4B), Key Counter(1B), Flags(1B), sender address(8B), Block Counter(2B)]
- **Block counter**: sender breaks packet into **16-byte blocks**.

### Access Control (IEEE 802.15.4 MAC)
- Uses **Access Control List (ACL)** — max **255 entries**.
- Each ACL entry stores: IEEE 802.15.4 address, Security Suite identifier, cryptographic Key, Nonce/IV, **Replay Counter** (last received packet ID).

### Added Security with TSCH
- **IEEE 802.15.4-2011** provides MAC-layer security; **IEEE 802.15.4e-2012** adds modifications.
- Frame Counter can be **null**, or **4 or 5 bytes**.
- Frame Counter can be set to global **Absolute Slot Number (ASN)** → enables time-dependent security, replay protection, semantic security.
- Uses 2 reserved bits: **bit 5** = suppress Frame Counter (null); **bit 6** = distinguish 4 vs 5 byte Frame Counter.

### Adaptation Layer Protocol — 6LoWPAN
- Key technology to support Internet communications in IoT.
- Defines: **Header compression** (NET+TRN layer), **Neighbor discovery**, **Address auto-configuration**.
- Supports **4 header types**: Not 6LoWPAN, Dispatch, Mesh Addressing, Fragmentation.

### Security in 6LoWPAN
- **No security mechanisms currently defined** at the 6LoWPAN adaptation layer itself (important T/F!).
- Related RFCs: **RFC 6606** (importance of security, AES-CCM usefulness), **RFC 3971** (SEND — SEcure Neighbor Discovery), **RFC 3972** (Cryptographically Generated Addresses)

### RPL (Routing Protocol for Low-Power and Lossy Networks)
- Builds a **Destination Oriented Directed Acyclic Graph (DODAG)** topology.
- Each DODAG has unique ID from root; uses link costs, node attributes (rank), status info; function = **Objective Function (OF)**.
- **Control messages**: **DIO** (DODAG Information Object), **DIS** (DODAG Information Solicitation), **DAO** (Destination Advertisement Object), **DAO-ACK**, **CC** (Consistency Check)
- RPL messages are **Type 155 ICMP messages**.

### Security in RPL — 3 Security Modes
1. **Unsecured**
2. **Preinstalled** — pre-configured symmetric key; achieves Confidentiality, Integrity, Data authentication
3. **Authenticated** — device joins with pre-configured key, then obtains a different key from key authority to function as router

**RPL Security field key terms**: T (counter type), Algorithm (encryption/MAC/signature scheme), **KIM** (Key Identifier Mode), **LVL** (Security Level), Flags, Counter (replay/semantic security), Key Identifier. Defined in **RFC 6550**.

- Confidentiality & delay protection: **AES-CCM** (MAC applied on entire IPv6 packet)
- Integrity & Data Authenticity: **AES-CCM-128** or **RSA with SHA-256**
- Semantic security/replay protection: via **Counter field**

### CoAP (Constrained Application Protocol)
- For constrained/low-power networks; follows **request-response** pattern.
- Request sent via **Confirmable (CON)** or **Non-Confirmable (NON)** message.
- Uses **stop-and-wait with exponential backoff** for reliability.
- Response scenarios: piggy-backed, separate response, etc.
- Very efficient **RESTful** protocol; low header overhead; supports async & sync messaging; mainly for **UDP** communications.

### CoAP Security — 4 Security Modes (MEMORIZE)
1. **NoSec** — no security applied
2. **PreSharedKey** — pre-programmed symmetric keys
3. **RawPublicKey** — pre-programmed asymmetric key pair; identity from public key; **mandatory for implementing CoAP**
4. **Certificates** — asymmetric key pair with **X.509 certificate**

- **ECC (Elliptic Curve Cryptography)** supports RawPublicKey & Certificates modes:
  - Device authentication: **ECDSA** (Elliptic Curve Digital Signature Algorithm)
  - Key agreement: **ECDHE** (Elliptic Curve Diffie-Hellman with Ephemeral keys)
- **PreSharedKey** mode requires **TLS_PSK_WITH_AES_128_CCM_8** suite (8-byte nonce, 8-byte integrity codes).
- CoAP uses **DTLS** (Datagram Transport-Layer Security) binding for security.
- Payload breakdown with DTLS on 6LoWPAN (127 bytes total): 802.15.4 overhead (10B) + 6LoWPAN addressing (4B) + CoAP addressing (13B) + DTLS + Application payload (75B)

### View from Operational Level — 3 Levels (IMPORTANT — likely full listing Q)
1. **Information Level**: Integrity, **Anonymity** (identity hidden), Confidentiality, **Privacy** (client's private info not disclosed)
2. **Access Level**: **Access Control** (only legitimate users access devices/network), **Authentication**, **Authorization**
3. **Functional Level**: **Resilience** (network capacity under attacks/failures), **Self Organization** (adjusts to remain operational despite partial failure/attack)

### Security Mechanisms for IoT
- **Encryption**:
  - Symmetric: **AES-128, AES-192, AES-256** (CTR/CBC/CCM mode) — mainly for confidentiality
  - Asymmetric: **RSA, Elgamal**
  - Authentication/Integrity via: MAC (symmetric), Digital Signature (asymmetric), Hash Functions
  - Tag obtained by: AES-CBC-MAC, DSA, ECDSA, RSA+Hash (MD5, SHA-160, SHA-256, SHA-512)
- **Lightweight Cryptography**: Block ciphers — **PRESENT, CLEFIA, PRINCE**; Hash functions — **PHOTON, SPONGENT**
- **Secure Hardware**: e.g. **PUF (Physically Unclonable Functions)** — exploits fabrication differences for unique device signature; shortcoming = increased power consumption
- **Intrusion Detection Systems**: complex antivirus can't run on IoT devices → **Lightweight IDS** monitors anomalies (CPU usage, memory, network throughput)

### Implementation in Commercial Devices
- IoT devices typically have **2 microcontrollers**: one for data management/processing, one for connectivity.
- Most use **ARM Cortex-M series**:
  - **M0, M0+, M23** — minimal cost/power/size
  - **M3, M4** — balance of performance & energy efficiency
  - **M7** — high performance embedded applications
- Example: **TI CC2650 Sensor Tag** (ARM Cortex-M3 main CPU + Cortex-M0 sensor controller)
- Cortex-M family generally **lacks** hardware pseudorandom number generator & crypto modules (like AES) — implemented via software or co-processors.
- Example: **TI CC2540** MCU has AES security co-processor; **TI SoC CC2538** implements AES in hardware.

### Lessons Learned / Key Reference (PDF7)
- Important reference: Granjal et al., "Security for the Internet of Things: A Survey of Existing Protocols and Open Research Issues", IEEE Communications Surveys & Tutorials, vol. 17, no. 3, 2015.
- Survey referenced on title slide: https://ieeexplore.ieee.org/document/7005393

---
---

## 📗 PDF 8: Introduction to Arduino (Board & IDE)

### What is Arduino?
- **Open-source electronics platform** based on easy-to-use hardware & software.
- Born at **Interaction Design Institute Ivrea, Italy** — for fast prototyping, aimed at students without electronics/programming background.
- Boards have microcontrollers to execute small programs, receive input, act on real world.
- **Why widely used**: Inexpensive, Cross-platform (Windows/Mac/Linux), easy-to-use HW+SW, open source HW+SW IDE, interacts with other boards/computers, interacts with sensors/actuators, facilitates serial communication.

### Types of Arduino Boards (3 categories — MEMORIZE)
1. **Entry Level**: Arduino UNO, Arduino Nano, Arduino Micro
2. **Enhanced Features**: Arduino Zero, Arduino Mega 2560, Arduino Motor Shield
3. **Internet of Things**: Arduino Nano 33 IoT, Arduino Nano 33 BLE, UNO WiFi REV2

### Arduino UNO Details
- Single board microcontroller based on **ATmega328P** processor (product of **Atmel**, now **Microchip**).
- Naming breakdown: **32** = flash memory capacity (32KB); **8** = CPU type (8-bit); **p** = picoPower (very low power)
- Specs: **AVR CPU up to 16 MHz, 32KB Flash, 2KB SRAM, 1KB EEPROM**
- Competitors: **STM32 ARM Cortex, MSP430, PIC MCU**

### Pins/Jacks in Arduino UNO R3 (list — good FITB)
14 digital I/O pins (6 usable as PWM outputs), 6 analog inputs, 6 power-related pins, a reset pin, an analog reference pin, a reset button, USB connection, power jack, **16 MHz ceramic resonator**, two **ICSP** headers, Atmel ATmega328 IC pins.

### Pin Description Table (IMPORTANT — memorize categories)
| Pin category | Pin Name | Key Detail |
|---|---|---|
| Power Pins | Vin, 3.3V, 5V, GND, RESET | 3.3V max current draw = **50mA** |
| ICSP | MISO, VCC, SCK, MOSI, RESET, GND | Used to code/boot Arduino from external source |
| Analog pin | A0–A5 | Analog input range **0–5V** |
| Digital I/O pin | Digital Pins 2–13 | Input or output |
| Serial Communication | 0(Rx), 1(Tx) | TTL serial data |
| External Interrupts | 2, 3 | Trigger interrupt |
| **PWM** | 3, 5, 6, 9, 10, 11 | **8-bit PWM** output |
| **SPI** | 10(SS), 11(MOSI), 12(MISO), 13(SCK) | SPI communication |
| Inbuilt LED | 13 | Turn on built-in LED |
| **I2C/TWI** | A4(SDA), A5(SCL) | Inter-IC / Two Wire Interface |
| AREF | Analog Reference Voltage | External ref voltage for ADC (e.g. if AREF=4V, analogRead 0-1023 maps to 0-4V not 0-5V) |

### Arduino in IoT
- Needs **specialized Arduino or shields** for network capability (Ethernet/WiFi/Cellular).
- Examples: Arduino Ethernet Shield, EtherTen, Arduino UNO WiFi Rev2.

### Arduino IDE Basics
- Download from **arduino.cc/en/Main/Software**
- Programs written in Arduino IDE = **sketches**.
- Built-in examples: **File → Examples**
- Set board: **Tools → Board → (board type)**
- Set serial port: **Tools → Port → COMxx** (tip: unplug Arduino, the port that disappears is yours)
- **Compile** button (checkmark) → shows "Done compiling" message
- **Upload** button (arrow) → shows "Done Uploading" message
- **Serial Monitor**: tether between computer & Arduino for sending/receiving text; select port first, then click Serial Monitor icon
- **Serial Plotter**: plots output signal graphically (Tools → Serial Plotter, or Ctrl+Shift+L)

### Installing Sensor Libraries
- **Sketch → Include Library → Manage Libraries** → search & install (e.g. "DHT" library by Adafruit for DHT11 sensor)
- Also need **"Adafruit Unified Sensor"** library for Adafruit-based sensor libraries.
- Other install methods: Import a **.zip Library** (Sketch → Include Library → Add .Zip Library), or **Manual installation** (extract zip → place in Sketchbook location → restart IDE).

### Demo: LED Blink
- **BareMinimum** example (File→Examples→Basics→BareMinimum) → in-built LED glows **continuously**
- **Blink** example (File→Examples→Basics→Blink) → in-built LED glows **periodically**
- External LED: connect **digital pin 9** → Anode (long leg) through **1K Ohm resistor**; Cathode → GND

### ATmega328P vs STM32 vs MSP430 (comparison table — good matching Q)
| | ATmega328P | STM32 | MSP430 |
|---|---|---|---|
| Brand | Atmel (Microchip) | STMicroelectronics (Cortex) | Texas Instruments |
| Cost | Low | High | Low |
| Architecture | Advanced RISC | Power Architecture (32-bit ARM) | Older, von-Neumann |
| Power Consumption | Low | Medium | Low |
| Performance | Medium | **High** (32-bit ARM core) | Low |
| Ease of Use | Easy, 8-bit, Arduino-compatible | Complicated (32-bit) | Complex vs Arduino |

### Lessons Learned (PDF8, as stated)
- What is Arduino; Types of Arduino Board; Arduino UNO pin diagram; Arduino in IoT; Arduino IDE; Built-in Sketch in IDE; Compiling & Uploading a sketch; LED blink program & system setup.

---
---

## 📘 PDF 9: Introduction to Arduino Programming

### Sketch Structure
- A sketch has **2 mandatory functions**:
  - **setup()** — executed **once** (initialization of serial comm, pinMode, declaring variables)
  - **loop()** — executed **repeatedly** (main code: reading sensors, triggering outputs)
- Sketches compiled by **avr-gcc / avr-g++**, based on **C/C++**.
- Compilation pipeline: Arduino Code (sketch) → (1) C Code Transformation → C/C++ Code → (2) Compile with avr-gcc → Object File → (3) Link → Binary File (*.hex) → (4) Upload (avrdude) → Hex code on Arduino Board.
- **Arduino Libraries** = collections of code that ease connecting to sensors/displays/modules (important extension beyond plain C/C++).

### Key Built-in Functions (MEMORIZE — very high exam value)
| Function | Purpose | Notes |
|---|---|---|
| `pinMode(pin, mode)` | Configure pin as input/output | mode: INPUT, OUTPUT, INPUT_PULLUP; default = INPUT |
| `digitalRead(pin)` | Read digital pin value | Returns HIGH or LOW |
| `digitalWrite(pin, value)` | Write digital output | value: LOW(0V)/HIGH(5V) |
| `analogRead(pin)` | Read analog pin | **10-bit ADC**, returns **0–1023** |
| `analogWrite(pin, value)` | Write PWM output | value: **0–255** (duty cycle) |
| `delay(ms)` | Pause program | in milliseconds |
| `Serial.begin(speed)` | Set baud rate | e.g. 9600 |
| `Serial.available()` | Bytes available to read | returns count |
| `Serial.print(value)` / `Serial.print(value, format)` | Print to serial port | format: BIN/OCT/DEC/HEX |
| `Serial.println()` | Print + newline | also returns bytes written |
| `Serial.read()` | Read incoming serial data | |
| `Serial.write(val)` | Write binary data | sends byte(s), not ASCII text |

- **Important distinction**: `analogRead()` range = 0–1023 (10-bit), `analogWrite()` range = 0–255 (8-bit PWM) — classic exam trap!
- Math functions: `abs()`, `max()`, `min()`, `pow()`, `sq()`, `sqrt()`, `random()`, `randomSeed()`
- Trig functions: `cos()`, `sin()`, `tan()`

### Data Types & Variables (Arduino ≈ C/C++)
- Constants: HIGH, LOW, INPUT, OUTPUT, INPUT_PULLUP, LED_BUILTIN, true, false
- Data types: array, bool, boolean, byte, char, double, float, int, long, short, size_t, string, String(), unsigned char/int/long, void, word
- Variable scope/qualifiers: const, scope, static, volatile
- Utilities: PROGMEM, sizeof()

### Control Structures & Operators
- Control: break, continue, do...while, else, for, goto, if, return, switch...case, while
- Arithmetic: % + - * / =
- Comparison: != < <= == > >=
- Boolean: ! (not), && (and), || (or)
- Bitwise: & | ^ ~ << >>
- Compound: += -= *= /= ++ -- etc.

### Example 1: Digital Read-Write (Pushbutton + LED)
- **Circuit**: LED at pin 13 → GND through 220Ω resistor; pushbutton one leg → pin 2; same leg → GND through **pull-down resistor (10K Ω)**; other leg → 5V supply.
- **Unpressed (open)**: pin reads **LOW** (connected to ground via pull-down resistor)
- **Pressed (closed)**: pin reads **HIGH** (connected to 5V)
- This is a classic **pull-down resistor configuration** — important concept for T/F.

### Example 2: Binary Counter in LED
- Requires: Arduino UNO, USB, breadboard, **4 LEDs**, **4× 1K Ω resistors**
- Logic: uses **bitwise AND (&)** to check each bit — e.g. `number = i & 1` checks bit 1, `i & 2` checks bit 2, `i & 4` checks bit 3, `i & 8` checks bit 4 — lights LED HIGH/LOW accordingly.
- Demonstrates converting a decimal loop counter to its **binary representation** via 4 LEDs.

### Reading Analog Voltage — Key Formula (VERY LIKELY numerical exam question)
**Aout = digital value × (Vref / (2^n − 1))**

- Example: digital value = 512, 10-bit ADC, Vref = 5V → **Aout = 512 × (5/1023) = 2.5V**
- `analogRead(pin)` returns **0–1023** (10-bit resolution)
- Arduino UNO resolution: **5V / 1024 units**

### Writing Analog Value (PWM)
- Digital control creates a **square wave** (ON/OFF) to simulate intermediate voltages.
- `analogWrite(value)`: 0 = **0% duty cycle**; 255 = **100% duty cycle**; 127 ≈ 50% duty cycle
- PWM duty cycle % examples: analogWrite(0)=0%, analogWrite(64)=25%, analogWrite(127)=50%, analogWrite(191)=75%, analogWrite(255)=100%
- Common application: **LED dimming via potentiometer** (potentiometer pins 1&3 → Vcc/GND, pin 2 (wiper) → A0 analog input; output LED on a PWM pin like pin 9)

### Lessons Learned (PDF9, as stated)
- What is Arduino Programming; Syntax of Arduino Programming; Supporting variables/structures/operators; In-Built Arduino Function Library; LED blink programming example; Binary counter program & demo; Analog Read and Write.

---

## 🎯 Quick-Fire Facts — PDF6–9 Addendum

| Fact | Answer |
|---|---|
| 6 basic IoT communication criteria | Range, Frequency bands, Power consumption, Topology, Constrained devices, Constrained-node networks |
| Long range distance threshold | > 1 mile (1.6 km) |
| India's extra ISM band | 865–867 MHz |
| Licensed IoT spectrum examples | Cellular (900–2100 MHz), NB-IoT (700–900 MHz) |
| LoRaWAN sleep current | 0.1 µA (lowest) |
| RFC defining constrained node classes | RFC 7228 |
| Class 0 constrained device example | Push button |
| Class 2 constrained device example | Smart meter |
| Minimum IPv6 MTU | 1280 bytes |
| MAC does NOT require | An encryption algorithm |
| Cryptography dates back to | Julius Caesar, 100 BC |
| Popular hash functions | MD5, SHA-1 |
| CoAP mandatory security mode | RawPublicKey |
| No security mechanism defined at | 6LoWPAN adaptation layer |
| RPL builds topology called | DODAG (Destination Oriented Directed Acyclic Graph) |
| RPL messages are ICMP type | 155 |
| PUF stands for | Physically Unclonable Functions |
| Arduino UNO processor | ATmega328P (Atmel/Microchip) |
| Arduino UNO flash/SRAM/EEPROM | 32KB / 2KB / 1KB |
| analogRead() resolution & range | 10-bit, 0–1023 |
| analogWrite() range | 0–255 (8-bit PWM) |
| Formula: Aout = | digital value × (Vref / (2^n − 1)) |
| Pushbutton unpressed reads | LOW (pull-down resistor) |
| Sketch mandatory functions | setup() and loop() |
| Sketches compiled by | avr-gcc / avr-g++ |

---

## Sources/Books referenced (PDF6–9)
- David Hanes et al., *IoT Fundamentals: Networking Technologies, Protocols, and Use Cases for the Internet of Things*, 1st Ed, 2018, Pearson India. (PDF6, PDF8, PDF9)
- Granjal et al., "Security for the Internet of Things: A Survey of Existing Protocols and Open Research Issues", IEEE Communications Surveys & Tutorials, vol. 17, no. 3, 2015. (PDF7)
- Sikder et al. survey (2021) — referenced across multiple lectures for 4-layer IoT architecture.

---
---

## 📓 PDF 10: 8085 Microprocessor — Timing Diagram

### What is a Timing Diagram?
- A **graphical representation** of the **execution time of each instruction** of the 8085 microprocessor.

### Key Terms (MEMORIZE definitions — high FITB/T-F value)
- **Clock Signal**: time required to execute an instruction = **clock cycle**.
- **Machine Cycle**: time required to access memory or I/O devices. 8085 has **5 basic machine cycles**: load opcode, read from memory, write to memory, read I/O, write I/O.
- **T-State**: the portion of an operation performed in **one system clock period**.
- **Control Signals**: control the operations — common ones: **ALE** (Address Latch Enable — note: NOT "address block enable" despite the slide wording), **RD** (read), **WR** (write), **IO/M** (I/O vs memory select).

### 5 Basic Machine Cycles of 8085 (MEMORIZE T-STATES — very high exam value)
| Machine Cycle | T-States |
|---|---|
| **Opcode Fetch** | **4T** |
| **Memory Read** | **3T** |
| **Memory Write** | **3T** |
| **I/O Read** | **3T** |
| **I/O Write** | **3T** |

- Opcode Fetch is the ONLY cycle with 4 T-states; all others are 3T.

### Opcode Fetch Machine Cycle
- Each instruction has a **1-byte opcode**, stored in memory.
- Every instruction **begins** with an opcode fetch machine cycle.
- Takes **4T** total: first **3 T-states** used to load opcode from memory; remaining T-state(s) used for **internal operations** (internal decoding).
- Signal sequence (T1–T4): T1 = higher order memory address on A15-A8, ALE pulses high, lower order memory address + opcode retrieval begins on AD7-AD0; T2 = IO/M=0, opcode read; T3 = S1=1,S0=1, data (D7-D0) read; T4 = address bus unspecified (internal operation, no memory access).

### Memory Read Machine Cycle
- Executed to **read a data byte from memory**.
- Takes **3T states**.
- Multi-byte instructions use **machine cycle after machine cycle** to load all opcodes/data.
- Signal pattern: IO/M=1, S1=1, S0=0 during T2/T3 (control signal state differs from opcode fetch).

### Memory Write Machine Cycle
- Executed to **write a data byte to memory**.
- Takes **3T states**.
- Signal pattern: IO/M=0, S1=0, S0=1; uses **WR** (write) control signal instead of RD.

### I/O Read Machine Cycle
- Reads a data byte from an **I/O port or peripheral** (I/O-mapped).
- Takes **3T states**.
- Signal pattern: IO/M=1, S1=1, S0=0 (same S1/S0 as memory read, but IO/M=1 distinguishes I/O vs memory).

### I/O Write Machine Cycle
- Writes a data byte to an **I/O port or peripheral** (I/O-mapped).
- Takes **3T states**.
- Signal pattern: IO/M=1, S1=0, S0=1; uses **WR** signal.

### Control Signal Summary Table (IO/M, S1, S0 — good matching/T-F question)
| Machine Cycle | IO/M̄ | S1 | S0 |
|---|---|---|---|
| Opcode Fetch | 0 | 1 | 1 |
| Memory Read | 0 (i.e., =0 for memory) / shown as IO/M=1,S1=1,S0=0 in some slides — memory ops have IO/M=0 for fetch, but plain memory read shown IO/M=1,S1=1,S0=0 in slide 8 (as per source diagram) | 1 | 0 |
| Memory Write | 0 | 0 | 1 |
| I/O Read | 1 | 1 | 0 |
| I/O Write | 1 | 0 | 1 |

*(Note: follow the exact diagrams from slides for exam — Opcode Fetch = IO/M=0,S1=1,S0=1; Memory Write = IO/M=0,S1=0,S0=1; I/O Read = IO/M=1,S1=1,S0=0; I/O Write = IO/M=1,S1=0,S0=1)*

### Timing Diagram Examples (Instruction-level — IMPORTANT for numerical/descriptive questions)

**1. MVI A, 45H** (Move Immediate — 2-byte instruction)
- Uses **2 machine cycles**: 
  1. **Opcode Fetch** (4T) — loads opcode **4EH** from memory address **2000H**
  2. **Memory Read** (3T) — reads data **45H** from memory address **2001H**
- Total = **4T + 3T = 7T states**

**2. STA 8000H** (Store Accumulator — 3-byte instruction)
- STA = **Store Accumulator**; stores content of accumulator to given memory address.
- Opcode of STA = **32H**
- Uses **4 machine cycles**:
  1. **Opcode Fetch** (4T) — reads opcode 32H from address 1000H
  2. **Memory Read** (3T) — reads low-order address byte (00H) from 1001H
  3. **Memory Read** (3T) — reads high-order address byte (80H) from 1002H
  4. **Memory Write** (3T) — combines address (8000H) and writes accumulator content (e.g. **C7H**) into memory location 8000H
- Total = 4T + 3T + 3T + 3T = **13T states**

**3. INR M** (Increment Memory content — example: at address C500H, opcode 34H)
- Memory address example: **D050H**; opcodes shown: **E1H and E2H**
- INR M involves: **Opcode Fetch** + **Memory Read** (read current content of memory location pointed by HL) + **Memory Write** (write back incremented value)
- Demonstrates read-modify-write behavior for memory-based increment.

### Applications of Timing Diagrams (list — likely T/F or short-answer)
- Keeps track of all changes occurring in the system (system chart).
- Provides accurate representation of physical activity (timelines).
- Represents execution time of each instruction graphically.
- **Timing Diagram is a special form of a sequence diagram.**
- Important for **planning the clock frequency** of the microprocessor.
- Helps design memory circuits that meet required **set and hold times** during read/write operations.
- Helps engineers troubleshoot, design memory/device interactions, and optimize performance.
- For students: simplifies learning by visually representing microprocessor's internal working.

### Quick-Fire Facts — PDF10 (8085 Timing Diagram)

| Fact | Answer |
|---|---|
| Number of basic machine cycles in 8085 | 5 |
| T-states for Opcode Fetch | 4T |
| T-states for Memory Read | 3T |
| T-states for Memory Write | 3T |
| T-states for I/O Read | 3T |
| T-states for I/O Write | 3T |
| ALE stands for | Address Latch Enable |
| RD signal means | Read |
| WR signal means | Write |
| IO/M̄ signal indicates | Whether operation is I/O or Memory related |
| A machine cycle & instruction cycle take how many clock periods | Several |
| Portion of operation in one clock period is called | T-state |
| Opcode size in 8085 | 1 byte |
| MVI A,45H total T-states | 7T (4T Opcode Fetch + 3T Memory Read) |
| STA instruction opcode | 32H |
| STA stands for | Store Accumulator |
| STA 8000H total machine cycles | 4 (1 Opcode Fetch + 2 Memory Read + 1 Memory Write) |
| Timing Diagram is a special form of | Sequence Diagram |
| Timing diagrams help plan | Clock frequency of the microprocessor |
