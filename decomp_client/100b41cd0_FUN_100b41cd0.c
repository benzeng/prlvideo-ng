
undefined8 FUN_100b41cd0(undefined8 param_1,long param_2,undefined4 *param_3)

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
  lVar2 = FUN_100b41be0(param_1,uVar1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100b41d51;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b41d51:
  if (lVar2 != 0) {
    uVar1 = CVirtualNetwork::getNetworkType();
    *param_3 = uVar1;
    uVar3 = 0;
  }
  return uVar3;
}

