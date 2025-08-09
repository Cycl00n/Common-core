#!/bin/bash

# Usage: ./run_random.sh [count] [max_value]
COUNT=${1:-5}      # how many numbers to generate (default 5)
MAX=${2:-100}      # maximum value in the range (default 100)

# Ensure COUNT is not greater than MAX
if [ "$COUNT" -gt "$MAX" ]; then
    echo "Error: count ($COUNT) cannot be greater than max value ($MAX)"
    exit 1
fi

# Generate unique random numbers and store in an array
NUMBERS=$(shuf -i 1-"$MAX" -n "$COUNT")

echo "Generated numbers: $NUMBERS"
echo

# Run push_swap with the generated numbers
./push_swap $NUMBERS
