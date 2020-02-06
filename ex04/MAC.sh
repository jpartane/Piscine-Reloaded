ifconfig | grep "ether" | sed s/ether// | grep -v "media" | cut -d " " -f2
