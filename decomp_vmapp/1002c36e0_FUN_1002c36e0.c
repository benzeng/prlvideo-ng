
undefined8 FUN_1002c36e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  CVmUsbDevice local_110 [240];
  
  CVmUsbDevice::CVmUsbDevice(local_110);
  cVar1 = FUN_10007f380(local_110,param_2);
  uVar2 = 0x80000003;
  if (cVar1 != '\0') {
    QMutex::lock();
    FUN_1002b9510(param_1,local_110);
    uVar2 = 0;
    QMutex::unlock();
  }
  CVmUsbDevice::~CVmUsbDevice(local_110);
  return uVar2;
}

