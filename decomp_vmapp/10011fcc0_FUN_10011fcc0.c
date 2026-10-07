
undefined1 FUN_10011fcc0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("basic_vm_cmd_vm_uuid",0x14);
  local_30 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_30,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10011ed70(param_1);
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_22 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

