find . -type f -name '*.sh' | awk -F / '{print $3}' | sed 's/\.sh//g'
