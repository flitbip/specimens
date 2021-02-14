#!/bin/bash
#pgrep -f docker > /dev/null || echo "starting docker..." docker run --rm -it -v "$(pwd)":/usr/src gcc
#Open Docker, only if is not running
if (! docker stats --no-stream ); then
  # On Mac OS this would be the terminal command to launch Docker
  open /Applications/Docker.app
 #Wait until Docker daemon is running and has completed initialisation
while (! docker stats --no-stream ); do
  # Docker takes a few seconds to initialize
  echo "Waiting for Docker to launch..."
  sleep 1
done
fi
docker run --rm -it -v "$(pwd)":/usr/src gcc
