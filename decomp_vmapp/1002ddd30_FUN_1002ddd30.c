
undefined4 FUN_1002ddd30(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar9 = param_1 + 4;
  if (((ulong)plVar9 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    plVar9 = (long *)((ulong)plVar9 | 1);
  }
  uVar8 = (ulong)*(byte *)(*(long *)(param_1[5] + 0x10) + 4);
  uVar3 = 1;
  if (uVar8 != 0) {
    uVar6 = 0;
    do {
      lVar1 = *(long *)(param_1[3] + uVar6 * 0x10);
      if (((lVar1 != 0) && (lVar2 = *(long *)(param_1[3] + 8 + uVar6 * 0x10), lVar2 != 0)) &&
         (uVar7 = (ulong)*(byte *)(lVar1 + 4), uVar7 != 0)) {
        plVar4 = (long *)(lVar2 + 8);
        uVar5 = 0;
        do {
          if (*(char *)(*plVar4 + 2) == *(char *)(param_2 + 0xca)) {
            if (lVar2 + uVar5 * 0x28 != 0) {
              uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
            }
            goto LAB_1002dde09;
          }
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 5;
        } while (uVar5 < uVar7);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
LAB_1002dde09:
  if (((ulong)plVar9 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar3;
}

