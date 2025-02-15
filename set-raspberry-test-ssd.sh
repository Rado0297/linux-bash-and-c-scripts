# What I want to make:
# 1. Create ssh connection between raspberry and MacOS
# Resource: https://www.onlogic.com/blog/how-to-ssh-into-raspberry-pi/
#    hostname - gives hostname for conn
#    hostname -I - gives the IP address

    ssh pi@<raspberry_ip_address>
#    then type the password of the raspberry

# 2. Make Tests for SATA SSD

# Resource: https://www.techrepublic.com/article/how-to-check-ssd-health-in-linux/
# For the SSD TEST:
# install software:
sudo apt install smartmontools

# how to list all drives:
lsblk or sudo df -h works good

# get some info about the SSD:
sudo smartctl -i /dev/sdX, where sdX is name of tested drive

# make short test:
sudo smartctl -t short -a /dev/sdX

# is good to make long test as well:
sudo smartctl -t long -a /dev/sdX

# to see results of test:
sudo smartctl -a /dev/sdX

# 3. Format the SSD

# how to list all disks:
sudo fdisk -l | grep “Disk /”

# Resources:
# https://phoenixnap.com/kb/linux-format-disk