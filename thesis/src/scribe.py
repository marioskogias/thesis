socket = TSocket.TSocket(host="HOST", port=9999)
transport = TTransport.TFramedTransport(socket)
protocol = TBinaryProtocol.TBinaryProtocol(trans=transport, strictRead=False, strictWrite=False)
client = scribe.Client(protocol)
transport.open()

category = 'zipkin'
message = 'hello world'

log_entry = scribe.LogEntry(category, message)
result = client.Log(messages=[log_entry])
if result == 0:
      print 'success'
