
undefined8 FUN_100ce83a0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_30;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("memsize",7);
  pcVar1 = *(code **)(*param_2 + 0x18);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_25 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_30 = pQVar3;
  uVar2 = (*pcVar1)(param_2,&local_30,10,0x80);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_24 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_24) goto LAB_100ce842a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100ce842a:
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_23 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_23) {
        return 0x8000000;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return 0x8000000;
}

