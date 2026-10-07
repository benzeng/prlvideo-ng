
ulong FUN_1000e9da0(long param_1)

{
  int *piVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar2 = (ulong)(*piVar1 == 0);
  }
  return uVar2;
}

