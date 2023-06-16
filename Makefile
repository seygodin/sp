obj-m := hello.o
KDIR := /home/YOUR_ACCOUNT/RPdev/rpi-linux # The custom Rpi kernel source directory in HW1
PWD := $(shell pwd)
default:
  $(MAKE) -C $(KDIR) M=$(PWD) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) modules
clean:
  $(MAKE) -C $(KDIR) M=$(PWD) ARCH=$(ARCH) clean
