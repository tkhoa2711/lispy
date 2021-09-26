FROM ubuntu:latest

RUN apt-get update \
    && apt-get install -y --no-install-recommends make gcc libedit-dev \
    && apt-get clean

WORKDIR /app
COPY . /app

RUN make build

CMD [ "make", "run" ]
