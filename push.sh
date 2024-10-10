#!/bin/bash

git add .
echo "Enter commit meassage:"
read X

git commit -m "$X"

git push
