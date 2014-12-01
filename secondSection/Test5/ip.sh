#bin/bash
for i in {0..255};
	do ping -c 1 -W 500 $s1.$s2.$s3.$si | grep from > ip.txt; done
