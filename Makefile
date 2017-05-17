obj-m := dma_proxy.o

#set ARCH to uarch
ARCH := arm
#set CROSS_COMPILE to cross compiler
CROSS_COMPILE ?= arm-xilinx-linux-gnueabi-
#set KDIR to kernel source root
KDIR ?= ~/zynq_os/linux-xlnx
#KDIR ?= /lib/modules/$(shell uname -r)/build
#set BUILD_DIR to desired build directory


all:
	$(MAKE) O=$(BUILD_DIR) -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) modules
	#$(MAKE) O=$(BUILD_DIR) -C $(KDIR) M=$(shell pwd) ARCH=$(ARCH) modules

clean:
	#$(MAKE) O=$(BUILD_DIR) -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(shell pwd) clean
	$(MAKE) O=$(BUILD_DIR) -C $(KDIR) M=$(shell pwd) clean
