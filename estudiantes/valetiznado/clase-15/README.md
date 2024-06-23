

**Linea Temporal:**

**Semana N°8 (25/abril):**	Elección del proyecto: “Smart Parking Lot System”, el cual consiste en; optimizar búsqueda de estacionamiento con Arduino mediante un sensor.

Igualmente hice la investigación de materiales viables para el proyecto y definición de los materiales que ya tenía disponibles para usar en el proyecto, dentro de los materiales ya disponibles estaban: dos monitores (uno de entrada y otro de salida), LEDS, Cables de puente y breadboard. Adicionalmente, hice una investigación preliminar de posibles softwares/sistemas; Raspberry Pi, sistema basado en IOT (Arduino Nano 33 IoT) y el posible uso y programación de 

También deje los objetivos definidos los cuales consistían en; reducir el tiempo perdido buscando estacionamiento mediante el uso de Arduino, el cual recogerá información a través de un sensor de movimiento y la transmitida por WiFi o Bluetooth, evaluando ademas la posibilidad de integrar un sistema de automatizado con luz LED.

**Semana N°9:**	Semana de pausa

**Semana N°10 (16/mayo):**	Se definieron los materiales concretamente, donde los que se compraron fueron una tarjeta de desarrollo ESP32 y dos sensores de proximidad HC-SR04. Decidi ademas trabajar con el Arduino UNO R4 mínima que es una placa de desarrollo de 32 bits con una alta potencia de procesamiento, igualmente posee una tolerancia de 24V, admitiendo un rango de voltaje mucho mas amplio que otras placas, lo que permite integrar de mejor manera sensores de distancia (en el caso de este proyecto)

**Semana N°11 (23/mayo):**	Para esta etapa se tengan todos los materiales, por lo que decidí empezar a trabajar en cómo enviar la información desde ESP32 vía WiFi. Descargue los controladores necesarios (CP2102), deje ademas en Aruduino IDE el URL que corresponde para poder gestionar la placa. En el gestor de placas de Arduino deje instalado el ESP32, logrando ademas visualizar el código en Arduino correspondiente.

**Semana N°12 (30/mayo):**	En esta clase aprendi que cuando estamos hablando de comunicación entre dispositivos en una red hay un servidor y un cliente, donde el cliente es el que solicita la información y el servidor es quien proporciona la respuesta adecuada, para el caso de este proyecto el ESP32 es el servidor, el cual se conecta la Hotspot de mi celular, y al conectarse el WiFi estan siempre conectados, entregándome una dirección IP. Y el cliente tendrá la misma dirección IP que es al me entrega el modulo ESP32, preguntándole al servidor cuales son los datos del sensor. Se trabajaron en los códigos para conectar el sensor a Arduino, procesando los datos y subiendo estos mismo a mi ESP32. Y se avanzo un poco en el código del sensor.

**Semana N°13 (6/junio):**	Se revisaron los trabajos de los compañeros y se destacaron los puntos relevantes de estos y en qué cosas podían mejorar. En cuanto al proyecto, se avanzo en la investigación sobre como mandar Indormación de manera inalámbrica al computador, para demostrar que somos capaces de usar el computador como cliente para leer los datos del servidor. Ademas se dejo listo el código final con el sensor HC-SR04 y decidí tomar la decisión de usar el Arduino Nano 33 IoT en ves del ESP32, ya que tuve problemas de conectividad con este ultimo.
**Semana N°14 (13/junio):** 

