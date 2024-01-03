#!/bin/bash

# Loop through all .c files in the current directory
for file in *.py; do
    dos2unix "$file"
done

echo "Newline conversion complete."