
/* CXmlUsbHelper::IsUsbDeviceAllowed(CHwUsbDevice const*, CVmExternalDevices const*) */

undefined1 CXmlUsbHelper::IsUsbDeviceAllowed(CHwUsbDevice *param_1,CVmExternalDevices *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  QArrayData *local_118;
  CVmUsbDevice local_110 [247];
  undefined1 local_19;
  
  CVmUsbDevice::CVmUsbDevice(local_110);
  (**(code **)(*(long *)param_1 + 0xb8))(&local_118,param_1);
  CVmDevice::setSystemName((QTypedArrayData<unsigned_short> *)local_110);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_19 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000240ff;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1000240ff:
  uVar2 = CHwUsbDevice::getUsbType();
  CVmUsbDevice::setUsbType(local_110,uVar2);
  uVar1 = IsUsbDeviceAllowed(local_110,param_2);
  CVmUsbDevice::~CVmUsbDevice(local_110);
  return uVar1;
}

