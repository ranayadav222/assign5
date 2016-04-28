===========================================================
               		Server-Client TCP (Parallel connection)
 
===========================================================
Problem Statment -> create a tcp socket server which connects
client parallely i,e it doesn't wait if simultaneous request
arrives. For each client a new thread is being assigned on successful
connection. client sends a message to server and after recieving this,
 server replies back to client with message to uppercase letter.

Compile:
gcc server.c -o server
gcc client.c -o client

RUN:( execute each command in a new terminal )
./server
./client
./client
./client


