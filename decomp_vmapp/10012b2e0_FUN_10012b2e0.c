
byte FUN_10012b2e0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  byte bVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_10011fcc0();
  if (cVar1 == '\0') {
    return 0;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("perfstats_filter",0x10);
  local_30 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_30,1);
  if (cVar1 == '\0') {
    bVar5 = 0;
  }
  else {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("perfstats_action",0x10);
    local_38 = pQVar4;
    iVar2 = FUN_10011d510(param_1,&local_38);
    bVar5 = -(iVar2 - 1U < 3) & iVar2 != 0;
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10012b3ce;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_10012b3ce:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return bVar5;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return bVar5;
}

