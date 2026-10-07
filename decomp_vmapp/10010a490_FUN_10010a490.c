
uint FUN_10010a490(long *param_1)

{
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)*param_1;
  *(uint *)*param_1 = 0xffffffff;
  UNLOCK();
  if (uVar1 < 3) {
    *(uint *)(*param_1 + 0x10) = uVar1;
    *(uint *)(param_1 + 1) = uVar1;
    return uVar1;
  }
  return *(uint *)(param_1 + 1);
}

