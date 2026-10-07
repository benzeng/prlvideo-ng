
bool FUN_1005b2d90(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = (param_2 / *(uint *)(param_1 + 0x1c) >> 0xc & 0xffffffff) * 0x40;
  QMutex::lock();
  cVar4 = FUN_1005ae880(param_1 + 0x48,lVar2 + lVar5);
  if (cVar4 != '\0') {
    lVar1 = lVar2 + 0x28 + lVar5;
    lVar3 = *(long *)(param_1 + 0x20);
    *(long *)(lVar3 + 8) = lVar1;
    *(long *)(lVar2 + 0x28 + lVar5) = lVar3;
    *(long *)(lVar2 + 0x30 + lVar5) = param_1 + 0x20;
    *(long *)(param_1 + 0x20) = lVar1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  QMutex::unlock();
  return cVar4 != '\0';
}

