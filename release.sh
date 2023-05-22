#!/bin/bash

MEDIATOR_BINARY_PATH="./build/Mediator/mediator"
PLAYER_BINARY_PATH="./build/Player/player"
RELEASE_PATH="./release"

cmake -B build -S .
cmake --build build

if [ ! -f "$MEDIATOR_BINARY_PATH" ]; then
    echo "Mediator binary not found. Please build the project first."
    exit 1
fi

if [ ! -f "$PLAYER_BINARY_PATH" ]; then
    echo "Player binary not found. Please build the project first."
    exit 1
fi

if [-f "RELEASE_PATH"]; then
    rm -rf "$RELEASE_PATH"
fi

mkdir "$RELEASE_PATH"
cp "$MEDIATOR_BINARY_PATH" "$RELEASE_PATH"
cp "$PLAYER_BINARY_PATH" "$RELEASE_PATH"
