#include <WiFi.h>             
#include <WebServer.h>

WebServer server(80);

void setup() {
  Serial.begin(115200);
  const char* ssid     = "";                        // Nombre de la RED Wifi
  const char* password = "";                            // Password
  
  Serial.println("Desconectamos antes de conectar el WiFi");
  WiFi.disconnect();
  
  Serial.print("Conectando a  ");
  Serial.println(ssid);
  
  //Conectamos el ESP32 a la red wifi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  //Intentamos conectarnos a la red
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  //Si logramos conectarnos mostramos la ip a la que nos conectamos
  Serial.println("");
  Serial.println("WiFi Conectado Exitosamente");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
  //Si entramos a la raiz mostramos las opciones
  server.on("/", []() {
    String content="";
    content += "<html>";
    content += "<div><a href=\"encender\">Encender</a></div>";
    content += "<div><a href=\"apagar\">Apagar</a></div>";
    content += "</html>";
    server.send(200, "text/html", content);
  });
  server.begin();
}
void loop() {
  //
  server.handleClient();
  delay(100);
}


