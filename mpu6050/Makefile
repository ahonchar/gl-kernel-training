#
# mpu6050 accelerometer & gyroscope
#

obj-m := mpu6050.o


KERNELDIR = "{armbian_dir}/cache/sources/linux-mainline/linux-4.14.y"

export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabihf-


.PHONY: all clean dtb

all:
	$(MAKE) -C $(KERNELDIR) M=$(CURDIR) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(CURDIR) clean

