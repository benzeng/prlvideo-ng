
undefined1 FUN_100132300(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("vm_network_config_prefs",0x17);
  local_30 = pQVar2;
  uVar1 = FUN_10011d720(param_1,&local_30,1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_22 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return uVar1;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return uVar1;
}

