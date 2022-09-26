# NCPFS module for Linux >= 4.18 #
Because the kernel dropped support for NCPFS with 4.18, we try to keep this as module alive.

## master-branch for kernel >= 5.19 ##

## load with DKMS ##

    git clone https://github.com/EnzephaloN/ncpfs_dkms.git ncpfs

    sudo cp -r ncpfs /usr/src/ncpfs-2.2.6
    sudo dkms add -m ncpfs -v 2.2.6
    sudo dkms build -m ncpfs -v 2.2.6 && sudo dkms install -m ncpfs -v 2.2.6 || true

### for older kernel support see other branches ###
https://github.com/EnzephaloN/ncpfs_dkms/tree/kernel_4.19
https://github.com/EnzephaloN/ncpfs_dkms/tree/kernel_4.20
https://github.com/EnzephaloN/ncpfs_dkms/tree/kernel_5.2
https://github.com/EnzephaloN/ncpfs_dkms/tree/kernel_5.6
https://github.com/EnzephaloN/ncpfs_dkms/tree/kernel_5.12
https://github.com/EnzephaloN/ncpfs_dkms/tree/kernel_5.15

## also available as manual module ##

https://github.com/EnzephaloN/ncpfs-module.git
