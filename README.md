# NCPFS module for Linux >= 5.6 #
## load with DKMS ##

    git clone https://github.com/EnzephaloN/ncpfs_dkms.git ncpfs

    sudo cp -r ncpfs /usr/src/ncpfs-2.2.6
    sudo dkms add -m ncpfs -v 2.2.6
    sudo dkms build -m ncpfs -v 2.2.6 && sudo dkms install -m ncpfs -v 2.2.6 || true

### for older kernel support see previous commits ###

## also available as manual module ##

https://github.com/EnzephaloN/ncpfs-module.git
