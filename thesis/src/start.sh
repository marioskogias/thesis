#!/bin/bash

#Start the local Scribe server

src/scribd examples/example2client.conf

#Create the lttng session
lttng create --live 200000 -U net://localhost
#Enable all userspace events
lttng enable-evenut -u -a
#Start the session
lttng start

#Start babeltrace live
babeltrace -i lttng-live net://localhost/host/<hostname>/<session_name> > /var/run/blkin

#Start the python consumer to send data to localhost to the predefined Scribe port
./consumer.py localhost 1464 /var/run/blkin
