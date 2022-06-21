


#  Server.py
import socket 
s= socket.socket()
print("socket sucessfully printed")
port =12345
s.bind(('',port))
print("bind")
s.listen(5)
print ("socket is listening")
c,addr = s.accept()
print ('Got connection from', addr )
c.send('Thank you for connecting'.encode())
c.close()
