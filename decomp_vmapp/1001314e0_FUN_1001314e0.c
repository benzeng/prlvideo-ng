
undefined1 FUN_1001314e0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("storage_cmd_key",0xf);
  local_38 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_38,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("storage_cmd_value",0x11);
    local_40 = pQVar4;
    uVar2 = FUN_10011d720(param_1,&local_40,1);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001315b9;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_1001315b9:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

