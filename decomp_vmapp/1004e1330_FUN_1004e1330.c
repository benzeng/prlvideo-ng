
long * FUN_1004e1330(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = param_2 + 0x38;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar5 = uVar5 | 1;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0x40) + 0x10);
  lVar3 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar2 = lVar1, uVar4 = *(uint *)(lVar2 + 0x18), param_3 <= uVar4) {
        lVar1 = *(long *)(lVar2 + 8);
        lVar3 = lVar2;
        if (*(long *)(lVar2 + 8) == 0) goto LAB_1004e13b9;
      }
      lVar1 = *(long *)(lVar2 + 0x10);
    } while (*(long *)(lVar2 + 0x10) != 0);
    if (lVar3 != 0) {
      uVar4 = *(uint *)(lVar3 + 0x18);
      lVar2 = lVar3;
LAB_1004e13b9:
      if ((uVar4 <= param_3) && (lVar2 != *(long *)(param_2 + 0x40) + 8)) {
        lVar1 = *(long *)(lVar2 + 0x20);
        *param_1 = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1004e13e5;
      }
    }
  }
  *param_1 = 0;
LAB_1004e13e5:
  if ((uVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return param_1;
}

