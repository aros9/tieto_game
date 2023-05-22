FROM gcc:latest

WORKDIR /usr/src/tieto_game

RUN apt-get update

RUN apt-get install -y cmake

COPY . /usr/src/tieto_game

RUN ./release.sh

CMD ["./release/mediator"]