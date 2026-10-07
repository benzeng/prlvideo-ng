
undefined8 FUN_1006b81f0(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar3 = 0x80000009;
  if (param_2 == 0) {
    return 0x80000009;
  }
  uVar1 = CVmDevice::getEmulatedType();
  CVmGenericNetworkAdapter::getVirtualNetworkID();
  lVar2 = FUN_1006b8100(param_1,uVar1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1006b8271;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006b8271:
  if (lVar2 != 0) {
    uVar1 = CVirtualNetwork::getNetworkType();
    *param_3 = uVar1;
    uVar3 = 0;
  }
  return uVar3;
}

