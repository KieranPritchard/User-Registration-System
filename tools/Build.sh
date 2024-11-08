#!/bin/bash

# This checks a file if a file name has been passed as an arguement
if [ -z "$1" ]; then
  echo "Usage: $0 <filename>"
  exit 1
fi

# Takes the filename then removes the exentension for the executable to use the same name 
filename=$1
executable_name="${filename%.*}.exe"

# Checks for if the file exists
if [ ! -f "$filename"]; then
  echo "Error encountered: '$filename' does not exist."
  exit 1
fi

# This checks if g++ installed
if ! command -v g++ &> /dev/null; then
  echo "Error encountered: g++ not installed. Please install g++ then run again"
  exit 1
else
  echo "Error encountered: Compilation failed."
  exit 1
fi

# Compiles code with g++
echo "Compiling $filename..."
if g++ "$filename" -o "$executable_name"; then
  echo "Successful compilation of $filename. Output: $executable_name"