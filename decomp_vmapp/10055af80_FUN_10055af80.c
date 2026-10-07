
undefined1 FUN_10055af80(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    QMutex::unlock();
  }
  else {
    uVar4 = (ulong)*(uint *)(lVar1 + 4);
    uVar3 = param_2 / uVar4;
    uVar6 = (uint)(((uVar4 - 1) + param_3 + param_2) / uVar4);
    if (*(uint *)(lVar1 + 8) < uVar6) {
      uVar6 = *(uint *)(lVar1 + 8);
    }
    QMutex::unlock();
    while (uVar5 = (uint)uVar3, uVar5 < uVar6) {
      if (((*(uint *)(*(long *)(param_1 + 0x38) + (uVar3 >> 5 & 0x7ffffff) * 4) >> (uVar5 & 0x1f) &
           1) == 0) && (cVar2 = FUN_10055b040(param_1,uVar3 & 0xffffffff), cVar2 == '\0')) {
        return 0;
      }
      uVar3 = (ulong)(uVar5 + 1);
    }
  }
  return 1;
}

