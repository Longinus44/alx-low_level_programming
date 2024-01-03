#!/bin/bash

# Loop through all .c files in the current directory
for file in *.c; do
    dos2unix "$file"
done

echo "Newline conversion complete."

# Loop through all .py files in the current directory
# for file in *.py; do
#     if [ -e "$file" ] && [ -f "$file" ]; then
#         dos2unix "$file"
#     else
#         echo "Skipping $file, not a regular file."
#     fi
# done

# echo "Newline conversion complete."
