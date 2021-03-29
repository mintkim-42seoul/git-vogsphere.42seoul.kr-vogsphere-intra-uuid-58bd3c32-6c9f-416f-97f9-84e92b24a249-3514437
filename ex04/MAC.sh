ifconfig | grep 'ether ' | awk '{print $1, $2}'
