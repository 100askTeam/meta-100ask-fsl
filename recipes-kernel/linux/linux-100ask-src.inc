# Copyright 2017-2018 NXP
# Released under the MIT license (see COPYING.MIT for the terms)

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

SRCBRANCH = "master"
LOCALVERSION = "-${SRCBRANCH}"

#KERNEL_SRC = "git://source.codeaurora.org/external/imx/linux-imx.git;protocol=https"
#SRC_URI = "${KERNEL_SRC};branch=${SRCBRANCH}"
#SRCREV = "f1c07cb4a71c7ee6ad5cb6675bafed1d19b2cd95"
KERNEL_SRC = "git://e.coding.net/weidongshan/imx-linux4.9.88.git;protocol=https"
SRC_URI = "${KERNEL_SRC};branch=${SRCBRANCH}"
SRCREV = "0d0e082cee983551d1d458d23ed106a58d3c7127"




S = "${WORKDIR}/git"
