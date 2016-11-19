#!/sbin/sh

CHECKSUM=`grep -c $'\x57' /dev/block/mmcblk0p5`
CHECK_SS_SUM=275

if grep -q "IM-A910S" /dev/block/mmcblk0p10 ; then

	if [ "$CHECKSUM" = "$CHECK_SS_SUM" ] ; then 
	mv /system/etc/firmware_ef63s/* /system/etc/firmware/
	fi

elif grep -q "IM-A910K" /dev/block/mmcblk0p10 ; then
	mv /system/etc/firmware_ef63k/* /system/etc/firmware/

fi

rm -rf /system/etc/firmware_ef63s
rm -rf /system/etc/firmware_ef63k
rm -rf /system/bin/device_check.sh
