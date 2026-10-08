
void FUN_1000df110(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  QArrayData *local_20;
  undefined1 local_12;
  undefined1 local_11;
  
  lVar3 = *(long *)(param_1 + 0x58);
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 == *(int *)(lVar3 + 0xc)) {
    uVar4 = 0;
  }
  else {
    plVar5 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      uVar4 = 1;
      if ((*(byte *)(*plVar5 + 0x20) & 0x20) != 0) goto LAB_1000df157;
      plVar5 = plVar5 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    uVar4 = 0;
  }
LAB_1000df157:
  local_20 = *(QArrayData **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  FUN_1000aeff0(uVar2,&local_20,uVar4);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

