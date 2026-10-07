
undefined1 FUN_100129eb0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  cVar1 = FUN_10011efe0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("vm_cfg_section",0xe);
    local_28 = pQVar3;
    uVar2 = FUN_10011d720(param_1,&local_28,0);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_1a = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_1a) {
          return uVar2;
        }
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
  return uVar2;
}

