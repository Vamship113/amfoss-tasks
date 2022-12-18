### Server side errors  and missing packages or namespace
1. added 
- using System.IO;
- using System.Net;
- using System.Net.Sockets;
2. changed ipAddress from 11000 to  8080
3. changed  Socket listener = new Socket(ipAddress.AddressFamily); to         Socket listener = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
4. declared bytesRec as of type of int.
5. string[] dataArr = data.Split(',');
6. changed if (/*Add condition based on the code*/) to if (File.Exists(fileName))
7. in main function changed Start() to StartListening();
### Client side errors and missing packages or namespace
1. added
- using System.Net;
- using System.Net.Sockets;

2. I have replaced     Socket sender = new Socket(ipAddress.AddressFamily);   by Socket sender = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
3.Since name,interests and mailare string so I declared them as String name,interests and mail.
4. since we store group of messages I used msg[] of byte type
5. in main function Start() was changed to StartClient()
