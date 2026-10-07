
undefined4
FUN_1002b8890(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined4 param_6)

{
  QArrayData *pQVar1;
  undefined4 uVar2;
  CVmUsbDevice local_128 [247];
  undefined1 local_31;
  
  CVmUsbDevice::CVmUsbDevice(local_128);
  CVmUsbDevice::setDefaults((QDomElement *)local_128);
  pQVar1 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName((QTypedArrayData<unsigned_short> *)local_128);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b893a;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002b893a:
  pQVar1 = (QArrayData *)*param_4;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName((QTypedArrayData<unsigned_short> *)local_128);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b899e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002b899e:
  CVmDevice::setEmulatedType((uint)local_128);
  CVmUsbDevice::setConnectReason(local_128,param_6);
  CVmDevice::setEnabled((uint)local_128);
  if (param_2 == 0) {
    uVar2 = FUN_1002b9510(param_1,local_128);
  }
  else {
    uVar2 = FUN_1002ba620(param_1,local_128);
  }
  CVmUsbDevice::~CVmUsbDevice(local_128);
  return uVar2;
}

