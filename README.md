# NCPFS module for Linux >4.16#
## load with DKMS ##

    git clone https://github.com/EnzephaloN/ncpfs_dkms.git
    
    sudo cp -r ncpfs /usr/src/ncpfs-2.2.6
    sudo dkms add -m ncpfs -v 2.2.6
    sudo dkms build -m ncpfs -v 2.2.6 && sudo dkms install -m ncpfs -v 2.2.6 || true
