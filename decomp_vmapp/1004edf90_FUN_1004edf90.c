
void FUN_1004edf90(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = param_1;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForRead();
    uVar3 = param_1 | 1;
  }
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != (long *)(param_1 + 0x10)) {
    FUN_1004ee070(plVar2[4],0xf0000020);
    plVar1 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar2[2];
        bVar4 = (long *)*plVar1 != plVar2;
        plVar2 = plVar1;
      } while (bVar4);
    }
    else {
      do {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  if ((uVar3 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return;
}

