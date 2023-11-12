
Regex: nomeDoCampo="(.\*?)"

 O valor capturado será o que estiver entre as aspas duplas

Exemplo:

Payload:
[...] time="10:12:23PM" action="deny" service="GoogleCloud" destIP="192.168.0.0.1" [...]

Regex: service=(.*?) 
Resultado: GoogleCloud