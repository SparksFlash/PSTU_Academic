import socket
import threading
import os
import time

HOST = '127.0.0.1'
PORT = 6000

def handle_client(conn, addr):
    print(f"Thread started for client {addr}")

    if os.path.exists(filename):
        conn.send(b'OK')
        with open(filename,'rb') as f:
            