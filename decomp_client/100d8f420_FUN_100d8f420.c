
undefined8 FUN_100d8f420(undefined8 param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  char *pcVar3;
  QArrayData *local_28;
  undefined1 local_1c;
  undefined1 local_1b;
  
  iVar1 = FUN_100d7e9e0();
  if (iVar1 == 6) {
    pcVar3 = "prl_pm_service.socket";
    iVar1 = 0x15;
  }
  else {
    pcVar3 = "prl_disp_service.socket";
    iVar1 = 0x17;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar1);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("UnixSockPath",0xc);
  FUN_100d8b360(param_1,&local_28);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_1c = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_1c) goto LAB_100d8f4a6;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d8f4a6:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1b = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

