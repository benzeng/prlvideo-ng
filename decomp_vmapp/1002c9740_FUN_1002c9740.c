
void FUN_1002c9740(long param_1,uint param_2)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  uVar4 = (ulong)param_2;
  FUN_1002d60c0(*(undefined8 *)(param_1 + 0x60 + uVar4 * 8),0);
  lVar2 = *(long *)(param_1 + 0x60 + uVar4 * 8);
  if (*(int *)(lVar2 + 0x18) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    local_30 = *(QArrayData **)(lVar2 + 0x20);
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_23 = *(int *)local_30 != 0;
      UNLOCK();
    }
    FUN_1002c3a00(uVar3,&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  else if (param_2 < 2) {
    puVar1 = (ushort *)(*(long *)(param_1 + 0x40) + 0x2010 + uVar4 * 2);
    *puVar1 = *puVar1 | 2;
  }
  else if (*(long *)(param_1 + 0x14e8) != 0) {
    FUN_1002db2f0(*(long *)(param_1 + 0x14e8),param_2 - 2);
    return;
  }
  return;
}

